int count = 0, i, j;
for (int i = 0; s[i]; i++)
{
    s[i] = tolower(s[i]);
}
for (int i = 0; s[i]; i++)
{
    if ((int(s[i]) >= 97 && int(s[i]) <= 122) || (int(s[i]) >= 48 && int(s[i]) <= 57))
        s[count++] = s[i];
}
s[count] = '\0';
i = 0;
j = count - 1;
while (i < j)
{
    if (s[i] == s[j])
    {
        i++;
        j--;
    }
    else
        return false;
}
return true;