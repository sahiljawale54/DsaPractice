#include <bits/stdc++.h> 
void insertsort(stack<int> &stack , int num){
    
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    
    insertsort(stack,num);
    
    stack.push(n);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
    //base ase
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    sortStack(stack);
    insertsort(stack,num);
}
