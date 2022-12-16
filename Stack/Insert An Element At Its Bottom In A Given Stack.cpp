#include <bits/stdc++.h> 
void solve(stack<int>& mystack, int x) {
    
    //base case
    if(mystack.empty()){
        mystack.push(x);
        return;
    }
    
    int num = mystack.top();
    mystack.pop();
    
    solve( mystack, x);a
    
    //backtrack
    mystack.push(num);
}
stack<int> pushAtBottom(stack<int>& mystack, int x) 
{
     solve( mystack, x);
    
    return mystack;
}
