#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i = 1; i < arr.size(); i++){
        int temp = arr[i];
        int j = i-1;
        
        for(; i >= 0 && temp < arr[j]; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}