int check(char ch)
{
    char X = tolower(ch);

    if (X == 'a' || X == 's' || X == 'd' || X == 'f' || X == 'g' || X == 'h' || X == 'j' || X == 'k' || X == 'l')
        return 1;
    else if (X == 'z' || X == 'x' || X == 'c' || X == 'v' || X == 'b' || X == 'n' || X == 'm')
        return 2;
    else
        return 3;
}
vector<string> findWords(vector<string> &words)
{
    vector<string> vect;

    for (int i = 0; i < words.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < words[i].length() - 1; j++)
        {
            if (check(words[i][j]) != check(words[i][j + 1]))
                flag = 1;
        }
        if (flag == 0)
        {
            vect.push_back(words[i]);
        }
    }
    return vect;
}