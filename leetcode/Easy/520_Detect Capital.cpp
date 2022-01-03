bool detectCapitalUse(string word)
{
    int cap, sam;
    cap = sam = 0;

    for (int i = 0; word[i]; i++)
    {
        if (islower(word[i]))
            sam++;
        else
            cap++;
    }
    if (sam == word.size() || cap == word.size())
        return true;
    else if (isupper(word[0]) && sam == word.size() - 1)
        return true;
    return false;
}