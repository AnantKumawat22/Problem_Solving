// Logic :-
// Simply, Point last element of both string and start adding their elements in backwards.

// Leetcode Solution Link:- https://leetcode.com/problems/add-binary/solutions/1799363/c-67-add-binary/?orderBy=most_votes&languageTags=cpp

string addBinary(string a, string b) {
    int i = a.size()-1, j = b.size()-1, carry = 0, firststr, secondstr;
    string str;

    while(i != -1 || j != -1 || carry){
        firststr = (i != -1) ? int(a[i--]) - '0' : 0;
        secondstr = (j != -1) ? int(b[j--]) - '0' : 0;

        int sum = firststr + secondstr + carry;
        str += to_string(sum % 2);
        carry = sum / 2;
    }
    reverse(str.begin(), str.end());
    return str;
}