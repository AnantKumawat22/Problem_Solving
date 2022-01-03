/*
we have to put two values at one place, one is previous value and second is resultant value.

suppose we have 4 and 3 to store in one place.

we know n is always greater than all other elements. So if we,
    ele % n == ele
    ele / n == 0

We need previous value in first for loop, 
and prev. value we can get from,
    a = 4
    b = 3
    a = a + b * n    ---- (i)

    if we do modulo of eqn.(i) then (b * n) part will be 0 becz it is multiple of n.
    so we can get a(i.e previous value).
    So, final eqn. is,
        a = a + (b % n) * n   ----(ii)
    
    And atlast we can do divide operation in eqn.(ii), So a part will be 0 becz a is smaller than n. So in resultant we get (b % n) * n. This will get result(i.e resultant value). 

*/

void arrange(long long arr[], int n)
{

    for (int i = 0; i < n; i++)
        arr[i] += (arr[arr[i]] % n) * n;
    for (int i = 0; i < n; i++)
    {
        arr[i] /= n;
    }
}