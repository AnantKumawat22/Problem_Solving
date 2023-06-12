class Solution
{
public:
    void printTillN(int N)
    {
        if(N > 1) printTillN(N-1);
        
        cout<<N<<" ";
    }
};