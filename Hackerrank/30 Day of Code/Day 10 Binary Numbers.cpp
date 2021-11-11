int count = 0, r, max = 0;
while (n >= 1)
{
    r = n % 2;
    if (r == 1)
        count++;
    else
        count = 0;
    if (count > max)
        max = count;
    n = n / 2;
}
cout << max;