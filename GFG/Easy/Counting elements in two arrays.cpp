vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n){
    vector<int> vect;
    sort(arr2, arr2 + n);
    
    for(int i = 0; i < m; i++){
        int l = 0, h = n - 1, mid;
        while(l <= h){
            mid = (l + h) / 2;
            if(arr2[mid] == arr1[i]){ 
                if(l != h && arr2[mid] == arr2[mid + 1]) l = mid + 1;
                else { vect.push_back(mid + 1); break; } 
            }
            else if(arr1[i] > arr2[mid]) l = mid + 1;
            else h = mid - 1;
        }
        if(l > h) vect.push_back(h + 1);
    }
    return vect;
}