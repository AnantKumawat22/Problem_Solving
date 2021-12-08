void swap(int *A, int *B){
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

// using reference

void swap(int &A, int &B){
    int temp;
    temp = A;
    A = B;
    B = temp;
}