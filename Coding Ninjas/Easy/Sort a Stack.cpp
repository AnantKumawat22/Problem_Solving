#include <bits/stdc++.h> 

void sort(stack<int>& stack, int x){
	int temp;

	if(!stack.empty() && (stack.top() > x)){
		temp = stack.top();
		stack.pop();

		sort(stack, x);
	} else {
		stack.push(x);
		return;
	}
	stack.push(temp);
}

void sortStack(stack<int> &stack){
	if(!stack.empty()){
		int temp = stack.top();
		stack.pop();

		sortStack(stack);
		sort(stack, temp);
	}	
}