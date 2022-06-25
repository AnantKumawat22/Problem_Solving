// We want to return the vector of max element present in stack at the time when we get "3" in <operations> string.

// Logic is that we will store max element at the top no matter what we have to push actually, by doing...
// ------- st.push(max(val, st.size() > 0 ? st.top() : val));

// So whenever we get "3" we can store stack top in vector.

// Doubt is that what will happen of that value that we ignore and pusshed max(i.e stack top) in place of that value,

// suppose we pusshed 26, and then we have to push 20 next, now we will not push 20, we will push max of stack top and that value so max(26, 20) is 26, So we will push 26 rather than 20.

// Our stack = [26, 26] (top->down). ----(i)

// Suppose if we have to find max now so our answer will be 26, if our stack was like [20, 26] then also....but in (i) we can directly push stack top in vector in O(1). 

// Here if we pop top value of stack then also max is 26. we are supposing to pop 20 but in actual we have poped 26.

// And when we get value greater than 26, like 30 then, 

// Our stack = [30, 26] (top->down). ----(ii)

// So max value is 30.

// So, that means if we push max(stack top, val) then the actual value doesn't effect the operations of stack.


vector<int> getMax(vector<string> operations)
{
    vector<int> vect;
    stack<int> st;

    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i][0] == '1')
        {
            int val = stoi(operations[i].substr(2, operations[i].length()));
            st.push(max(val, st.size() > 0 ? st.top() : val));
        }
        else if (operations[i][0] == '2')
            st.pop();
        else
            vect.push_back(st.top());
    }
    return vect;
}