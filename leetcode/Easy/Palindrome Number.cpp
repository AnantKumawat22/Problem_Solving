bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    unsigned int t = x, palin = 0;

    while (t)
    {
        palin = palin * 10 + (t % 10);
        t /= 10;
    }
    if (palin == x)
        return true;
    else
        return false;
}