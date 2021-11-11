stack<char> s;
queue<char> q;

public:
void pushCharacter(char ch)
{
    s.push(ch);
}

char dequeueCharacter()
{
    int t = q.front();
    q.pop();
    return t;
}

char popCharacter()
{
    int t = s.top();
    s.pop();
    return t;
}

void enqueueCharacter(char ch)
{
    q.push(ch);
}