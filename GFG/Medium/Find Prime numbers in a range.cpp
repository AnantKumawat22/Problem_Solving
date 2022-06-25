vector<int> primeRange(int M, int N)
{
    vector<int> vect;

    if (M <= 1)
        M = 2;
    for (int i = M; i <= N; i++)
    {
        int flag = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            vect.push_back(i);
    }
    return vect;
}