class Student
{
private:
    int scores;
    int s[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> s[i];
            scores += s[i];
        }
    }
    int calculateTotalScore()
    {
        return scores;
    }
};