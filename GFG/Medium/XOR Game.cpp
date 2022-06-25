// For Special case for k == 1, return 2.

// Then, we have observed that only the number having binary digits all ones have the smallest possible xor.

// 01 ---> 1
// 10 ---> 2
// ---------
// 11 ---> 3 (11) Note


// 10 ---> 2
// 11 ---> 3
// ---------
// 01 ---> 1 (1) Note

// 011 ---> 3
// 100 ---> 4
// ----------
// 111 ---> 7(111) Note

// 101 ---> 5
// 110 ---> 6
// ----------
// 011 ---> 3(11) Note

// .......to be cotinued.

// Means if a number having in between 0 in its binary digits can't have smallest xor.

// we can differentiate between all one containing and a number having in between 0 in its binary digits, by doing k & (k + 1)....

// eg. 
// 1 & (1+1)
// 01 ---> 1
// 10 ---> 2
// ----------
// 00 ---> 0

// 3 & (3+1)
// 011 ---> 3
// 100 ---> 4
// ----------
// 000 ---> 0 

// It will always give 0 for above condition if the binary of that number contains 1's only.

// Now by observation we can see for 3 we want output as 1, for 7 we want 3.....so on....so we will do (k >> 1).


int xorCal(int k)
{
    if (k == 1)
        return 2;
    if ((k & (k + 1)) == 0)
        return k >> 1;
    return -1;
}