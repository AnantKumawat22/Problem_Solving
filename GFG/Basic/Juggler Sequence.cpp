class Solution{
private:
    vector<int> ans;
public:
    vector<int> jugglerSequence(int N){
        ans.push_back(N);
        
        if(N == 1) return ans;
        
        if((N & 1) == 0){
            int value = pow(N, 0.5);
            return jugglerSequence(value);
        }
        else{
            int value = pow(N, 1.5);
            return jugglerSequence(value);
        }
    }
};