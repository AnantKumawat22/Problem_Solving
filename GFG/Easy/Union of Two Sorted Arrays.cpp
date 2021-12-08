int check(vector<int> &A, int ele)
{
    if (A.size() > 0 && A[A.size() - 1] == ele)
    {
        return 1;
    }
    return 0;
}
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> vect;
    int i, j;
    i = j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            if (check(vect, arr2[j]))
            {
                i++;
                j++;
                continue;
            }
            vect.push_back(arr1[i++]);
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (check(vect, arr2[j]))
            {
                j++;
                continue;
            }
            vect.push_back(arr2[j++]);
        }
        else
        {
            if (check(vect, arr1[i]))
            {
                i++;
                continue;
            }
            vect.push_back(arr1[i++]);
        }
    }
    while (i < n)
    {
        if (check(vect, arr1[i]))
        {
            i++;
            continue;
        }
        vect.push_back(arr1[i++]);
    }
    while (j < m)
    {
        if (check(vect, arr2[j]))
        {
            j++;
            continue;
        }
        vect.push_back(arr2[j++]);
    }
    return vect;
}