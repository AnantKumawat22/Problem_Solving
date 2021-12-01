unsigned int sum = accumulate(arr.begin(),arr.end(),0);
unsigned int min = sum  - *max_element(arr.begin(), arr.end());
unsigned int max = sum - *min_element(arr.begin(), arr.end());
cout <<min<<" "<<max;