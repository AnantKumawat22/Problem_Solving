bool checkZeroOnes(string s)
{
    int onemax, zeromax, omax, zmax, k;
    onemax = zeromax = omax = zmax = k = 0;

    for (int i = 0; s[i]; i++)
    {
        if (s[k] != s[i])
        {
            if (s[i] == '1')
            {
                if (zeromax < zmax)
                    zeromax = zmax;
                zmax = 0;
            }
            else
            {
                if (onemax < omax)
                    onemax = omax;
                omax = 0;
            }
            k = i--;
        }
        else if (s[i] == '1')
            omax++;
        else if (s[i] == '0')
            zmax++;
    }
    if (onemax < omax)
        onemax = omax;
    if (zeromax < zmax)
        zeromax = zmax;

    if (onemax > zeromax)
        return true;
    return false;
}