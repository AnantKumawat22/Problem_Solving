int x = n;
int r, sum = 0;
while (1)
{
    r = x % 10;
    sum += r;
    x = x / 10;
    if (x < 1)
    {
        if (sum / 10 == 0)
            break;
        else
        {
            x = sum;
            sum = 0;
            continue;
        }
    }
}
return sum;