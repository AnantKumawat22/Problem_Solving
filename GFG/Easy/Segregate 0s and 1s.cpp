int count = 0, temp;
for (int i = 0; i < n; i++)
{
    if (arr[i] == 0)
    {
        temp = arr[i];
        arr[i] = arr[count];
        arr[count] = temp;
        count++;
    }
}
