stack<int> pushAtBottom(stack<int>& myStack, int x) {
    int temp;
    if(!myStack.empty()){
        temp = myStack.top();
        myStack.pop();
        pushAtBottom(myStack, x);
    } else {
        myStack.push(x);
        return myStack;
    }
    myStack.push(temp);
    return myStack;
}