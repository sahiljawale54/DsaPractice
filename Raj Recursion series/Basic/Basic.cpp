//reverse ans arrays

#include<bits/stdc++.h>
using namespace std;

void func(int a[] , int i , int n){
  if(i>=n/2) return ;
  
  swap(a[i] , a[n-i-1]);
  func(a , i+1 , n);
}

int main(){
  int array[5] = {1 ,2 ,3 ,4 ,5};
  
  func(array , 0 , 5);
  
  for(int i = 0 ; i < 5 ; i++){
    cout<<array[i]<<" ";
  }
}
