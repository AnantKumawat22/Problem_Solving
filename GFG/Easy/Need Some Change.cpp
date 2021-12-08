int temp;
for (int i = 0; i < sizeof_array - 2; i++)
{
    temp = arr[i];
    arr[i] = arr[i + 2];
    arr[i + 2] = temp;
}