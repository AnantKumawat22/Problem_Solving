bool isHappy(int n)
{
    int t = 0, r, rep = 0;

    while (t != 1)
    {
        t = 0;
        while (n > 0)
        {
            r = n % 10;
            t += r * r;
            n = n / 10;
        }
        n = t;
        if (t == 89)
            return false;
    }
    return true;
}