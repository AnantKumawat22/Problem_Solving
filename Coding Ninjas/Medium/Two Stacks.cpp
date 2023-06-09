#include <bits/stdc++.h> 
class TwoStack {
    int top1, top2, size;
    int *arr;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        arr = new int[s];
        this->top1 = -1;
        this->top2 = s;
        this->size = s;
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1){
            arr[++top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1){
            arr[--top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 == -1) return -1;
        return arr[top1--];
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 == size) return -1;
        return arr[top2++];
    }
};
