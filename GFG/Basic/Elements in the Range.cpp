// -> Ex.  N = 7, A = 2, B = 5
//         arr[] = { 1, 4, 5, 2, 7, 8, 3 }

// -> So we have to find numbers from 2-5. So,
//    2  3  4  5
//    |  |  |  |
//    0  1  2  3  //index assumed. we can get index of every element by doing (B-A).

// -> Now we will iterate the array from 0 to n and check every element. If it is in the range of A and B, then we will make the number negative in array(arr) according to the index assumed above( i.e B-A ).

//    For Ex. -> In above example we will get 4 as first element in the range which is in the range of (B-A).
//        Now we will find the assumed index of 4(by arr[i]-A), we will get 2(4 - 2), so we will negative the value on index 2 in array.
//        Now array will be look like, 
//        arr[] = { 1, 4, -5, 2, 7, 8, 3 }
//                  |  |   |  |  |  |  |
//                  0  1   2  3  4  5  6
// -> We will use abs(arr[i]), which will make the number(arr[i]) positive if the number is negative. So that we can use array as all positive elements(according to question....to maintain stability of array).

// -> We will check if number is already negative then no need to change it.
// -> Now, after this we will get all the elements negative, from 0 to (b-A) in the array. If we get any positive element in this range, then this shows that any of the element is not present in the array. So we will return false. 


bool check_elements(int arr[], int n, int A, int B){
    if(n<B-A+1) return false;
    for(int i = 0; i < n; i++){
        if(abs(arr[i]) >= A && abs(arr[i]) <= B){
            if(arr[abs(arr[i]) - A] > 0)
                arr[abs(arr[i]) - A] *= -1;
        }
    }
    for(int i = 0; i <= (B-A) && (i < n); i++)
        if(arr[i] > 0) return false;
   return true;
}