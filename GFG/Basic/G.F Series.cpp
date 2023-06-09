class Solution
{
private:
    long solveSeries(int N){
        if(N == 1) return 0;
        if(N == 2) return 1;
        
        long X = solveSeries(N-2);
        long Y = solveSeries(N-1);
        
        return ((X*X) - Y);
    }
public:
    void gfSeries(int N)
    {
        if(N >= 1) cout<<"0";
        if(N >= 2) cout<<" 1";
        
        for(int i = 3; i <= N; i++){
            cout<<" "<<solveSeries(i);
        }
        cout<<endl;
    }
};