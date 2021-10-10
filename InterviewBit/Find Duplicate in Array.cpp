int arr[A.size()] = {0};
for (int i = 0; i < A.size(); i++)
{
    arr[A[i]] += 1;
}
for (int i = 0; i < A.size(); i++)
{
    if (arr[i] > 1)
    {
        return i;
    }
}