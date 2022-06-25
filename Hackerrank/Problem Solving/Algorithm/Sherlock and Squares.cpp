// The solution for this problem will be the count of a quantity of integers which are square numbers and have integer square roots. The trick is to not look at the (potentially millions large) range of values we want to examine to see if they are square roots, but to look at the roots they become.

// So if you look at the range of all integers,

// 1 2 3 4 5 6 7 8 9 .... etc,

// each of these can be squared to produce a value. Each maps to a 'seemingly random' set of numbers

// 1 4 9 16 25 36 49 64 81 ... etc

// If you had been given the values 20 and 55, and asked to find all the squares in between, you might iterate 20 - 55 and find the sqrt of each number, that's 36 tests adding to the accumulated value each time you find a match.

// But, each of the square roots you find in that range will be in a sequence. You will find

// sqrt(25) = 5 sqrt(36) = 6 sqrt(49) = 7

// for ANY test like this, the results MUST be the squares of a sequence of integers. You can't find the squares of 5,6,8, and 9 in your solution without the square of 7 also being in there. It has to be because you are looking at all numbers in a range.

// So, if you find the square roots of your start and end values, that will give you a start and end of this range of integers which provide the squared values in your required range.

// In the example I give here, sqrt(20) is between 4 and 5; sqrt(55) is between 7 and 8.

// 1 2 3 4 * 5 6 7 * 8 9

// So in between those, there are 3 values which if you square them will be the 3 square numbers between 20 and 55. Your answer is 3.

// This works for every range. So even if you have a billion values in your range, by finding their square roots you find the integers those square roots "surround" and therefore your required result. This is clearly a lot faster than checking each one or trying to create a database of all primes for lookup, or any other method. Find the square root of the two provided values and work it from there.

int squares(int a, int b) {
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1);
}