
int count = 0, i;
for (i = s.length() - 1; s[i] == ' '; i--)
    ;
for (int j = i; j >= 0 && s[j] != ' '; j--)
{
    count++;
}
return count;