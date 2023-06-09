#include <bits/stdc++.h> 

void stackMiddleDelete(stack<int>&inputStack, int i, int N){
   int temp;

   if(i < N/2){
      temp = inputStack.top();
      inputStack.pop();
      stackMiddleDelete(inputStack, i+1, N);
   } else{
      inputStack.pop();
      return;
   }
   inputStack.push(temp);
}

void deleteMiddle(stack<int>&inputStack, int N){

      stackMiddleDelete(inputStack, 0, N);
      
}

// Alter :-

int i = 0;
void deleteMiddle(stack<int> &inputStack, int N) {
   int temp;

   if (i < N / 2) {
      temp = inputStack.top();
      inputStack.pop();
      i++;
      deleteMiddle(inputStack, N);
   } else {
      inputStack.pop();
      return;
   }
   inputStack.push(temp);
   i = 0;
}