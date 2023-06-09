// By observing some pattern of non-happy number you will find every non-happy number once pass through 89 and 89 is also non-happy. So if a non happy number reached to 89 we can return false.

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