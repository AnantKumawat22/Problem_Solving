int len = haystack.length();
int k = 0;
int i, j, firstOcc;
i = 0, j = 0;

if (len < needle.length())
    return -1;
if (needle == "")
    return 0;

while (haystack[i] != '\0')
{

    while (haystack[i] != needle[0] && haystack[i] != '\0')
        i++;

    if (haystack[i] == '\0')
        return (-1);

    firstOcc = i;

    while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
    {
        i++;
        j++;
    }

    if (needle[j] == '\0')
        return (firstOcc);
    if (haystack[i] == '\0')
        return (-1);

    i = firstOcc + 1;
    j = 0;
}
return -1;