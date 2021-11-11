int valleys = 0;
int sea = 0;
for (int i = 0; path[i] != '\0'; i++)
{
    if (path[i] == 'U')
        sea++;
    else
        sea--;
    if (sea == 0 && path[i] == 'U')
    {
        valleys++;
    }
}
return (valleys);