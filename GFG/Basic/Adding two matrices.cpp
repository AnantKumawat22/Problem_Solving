vector<vector<int>> sumMatrix(const vector<vector<int>> &A, const vector<vector<int>> &B)
{
    vector<vector<int>> vect;
    if (A.size() != B.size() || A[0].size() != B[0].size())
        return vect;

    for (int i = 0; i < A.size(); i++)
    {
        vector<int> newvect;
        for (int j = 0; j < A[0].size(); j++)
        {
            newvect.push_back(A[i][j] + B[i][j]);
        }
        vect.push_back(newvect);
        newvect.clear();
    }
    return vect;
}