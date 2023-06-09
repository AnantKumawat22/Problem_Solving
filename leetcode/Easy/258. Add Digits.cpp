// 10 -> 1 .....................| | ..................... 20 -> 2
// 11 -> 2 .....................| | ..................... 21 -> 3
// 12 -> 3 .....................| | ..................... 22 -> 4
// 13 -> 4 .....................| | ..................... 23 -> 5
// 14 -> 5 .....................| | ..................... 24 -> 6
// 15 -> 6 .....................| | ..................... 25 -> 7
// 16 -> 7 .....................| | ..................... 26 -> 8
// 17 -> 8 .....................| | ..................... 27 -> 9
// 18 -> 9 .....................| | ..................... 28 -> 1
// 19 -> 1 .....................| | ..................... 29 -> 2 .......To be Continued....

// .
// .

// We have observed that result is repeating from 1 - 9 and most important it is repeating in pattern. First 1 - 9 then again 1 - 9......and continue....
// .

// Now we have to think around 9. If we do modulo of number from 9 then we can get our result due to above pattern.
// .

// Now we are left with one cases when number is divisible by 9. It will give 0 everytime, like 27 % 9 == 0, 36 % 9 == 0. so we can use ternary operator when num % 9 == 0 return 9.

int addDigits(int num) {
        return num > 9 ? num % 9 == 0 ? 9 : num % 9 : num;
    }