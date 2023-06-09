// Logic :-
// Logic is to add "1" in last element and further add carry to next elements, backwards.
// And if there is carry left, then replace "1" at 0th index and add "0" at last.

// Leetcode Solution Link:- https://leetcode.com/problems/plus-one/solutions/1795414/c-66-plus-one/

vector<int> plusOne(vector<int>& digits) {
    int i = digits.size() - 1, addOne = 1, carry = 0;

    while(carry || i == digits.size()-1){
        if(i == -1) break;
        int sum = digits[i] + addOne + carry;
        digits[i--] = sum % 10;
        carry = sum / 10;
        addOne = 0;
    }
    if(carry) {
        digits.push_back(0);
        digits[0] = 1;
    }
    return digits;
}

// Better Solution,

vector<int> plusOne(vector<int>& digits) {
    for(int i = digits.size() - 1; i >= 0; i--){
        if(digits[i] == 9) digits[i] = 0;
        else{
            digits[i]++;
            return digits;
        }
    }
    digits.push_back(0);
    digits[0] = 1;
    return digits;
}