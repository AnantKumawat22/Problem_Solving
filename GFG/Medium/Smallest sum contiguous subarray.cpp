// Logic:- Kadane's Algorithm.
int smallestSumSubarray(vector<int>& a){
  int curr = 0, min = INT_MAX;
  
  for(auto x: a){
      curr += x;
      if(curr < min) min = curr;
      if(curr > 0) curr = 0;
  }
  return min;
}