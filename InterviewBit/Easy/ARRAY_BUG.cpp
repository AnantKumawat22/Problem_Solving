C++ Solution.

(i + B) % A.size() -----> This line act like a circular array.

suppose,
--> A.size() = 5;
--> B = 1;

Then,
--> (0 + 1) % 5 = 1st element,
--> (1 + 1) % 5 = 2nd element,
--> (2 + 1) % 5 = 3rd element,
--> (3 + 1) % 5 = 4th element,

--> (4 + 1) % 5 = 0th element,
end.


vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret;
    for (int i = 0; i < A.size(); i++) {
        ret.push_back(A[(i + B) % A.size()]);
    }
    return ret;
}