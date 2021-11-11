int temp, flag = 0;
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - i - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
            flag++;
        }
    }
    if (flag == 0)
    {
        break;
    }
}
cout << "Array is sorted in " << flag << " swaps." << endl;
cout << "First Element: " << a[0] << endl;
cout << "Last Element: " << a[n - 1] << endl;