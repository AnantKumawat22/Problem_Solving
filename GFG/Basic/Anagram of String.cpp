int remAnagram(string str1, string str2)
{
    int arr[26] = {0}, count = 0;

    for (int i = 0; str2[i]; i++)
        arr[str2[i] - 'a']++;
    for (int i = 0; str1[i]; i++)
    {
        if (arr[str1[i] - 'a'] > 0)
            arr[str1[i] - 'a']--;
        else
            count++;
    }
    for (int i = 0; i < 26; i++)
        count += arr[i];
    return count;
}