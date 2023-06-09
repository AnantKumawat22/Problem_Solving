void insertAtBottom(stack<int>& stack, int x){
    int temp;

    if(!stack.empty()){
        temp = stack.top();
        stack.pop();
        insertAtBottom(stack, x);
    } else {
        stack.push(x);
        return;
    }
    stack.push(temp);
}

void reverseStack(stack<int> &stack) {
    if(!stack.empty()){
        int topmostele = stack.top();
        stack.pop();
        reverseStack(stack);
        
        insertAtBottom(stack, topmostele);
    }
}