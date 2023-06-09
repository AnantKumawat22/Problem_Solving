
// Leetcode Solution Link:- https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/solutions/2823084/c-100-beats-time-o-n-space-o-1-easy-explanation/

// Logic:-
// To Find the product and sum we need to sperate each digit of the number.

// To get each digit from number we mod(%) the number with 10. So that it will give the last digit from number.

// mod(%) :- mod gives the remainder. Ex. (36 % 10 = 6). Because 36 divide by 10 gives 6 as remainder. So we get digit 6.

int subtractProductAndSum(int n) {
    int sum = 0, product = 1;

    while(n > 0){
        sum += n % 10;
        product *= n % 10;
        n /= 10;
    }
    return product - sum;
}