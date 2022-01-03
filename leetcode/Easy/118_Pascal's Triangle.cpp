vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> vect(numRows);

    for (int i = 0; i < numRows; i++)
    {
        vector<int> insvect(i + 1, 1);
        vect[i] = insvect;
        if (i > 1)
        {
            for (int j = 0; j < i - 1; j++)
            {
                vect[i][j + 1] = vect[i - 1][j] + vect[i - 1][j + 1];
            }
        }
    }
    return vect;
}