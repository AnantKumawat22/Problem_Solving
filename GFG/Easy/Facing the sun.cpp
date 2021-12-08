int seenbuild = 1, t = h[0];
for (int i = 1; i < n; i++)
{
    if (h[i] > t)
    {
        t = h[i];
        seenbuild++;
    }
}
return seenbuild;