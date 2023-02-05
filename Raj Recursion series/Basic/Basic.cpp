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

// print all subquence

#include<bits/stdc++.h>
using namespace std;

void func(int arr[] , int i , int n, vector<int> &ans ) {
    if (i == n) {
        for (auto ele : ans) {
            cout << ele << " ";
        }
        cout << endl;
        return;
    }
    //add ele in array
    ans.push_back(arr[i]);
    //take
    func(arr , i + 1 , n , ans);
  
    ans.pop_back();

    //not take
    func(arr , i + 1 , n , ans);

}

int main() {
    int array[3] = {3 , 1, 2};
    std::vector<int> ans ;
    func(array , 0 , 3 , ans);
}


// /print all subquence whose sum is k 

#include<bits/stdc++.h>
using namespace std;

void func(int arr[] , int idx , int k , vector<int> &ds , int sum){
  
  if(idx == 3) {
    if(sum == k){
      for(auto ele : ds) cout<< ele <<" ";
      cout<<endl;
    }
    
    return;
  }
  
  //take wala case
  
  ds.push_back(arr[idx]);
  sum+=arr[idx];
  
  func(arr , idx+1 , k , ds , sum);
  
  ds.pop_back();
  sum-=arr[idx];
  
  func(arr , idx+1 , k , ds , sum);
  
}

int main(){
  int arr[3] = {1  ,2, 1 };
  
  int k = 2;
  vector<int> ds;
  func(arr , 0 , k , ds , 0);
}


// printing any one subquence whose sum is k 

#include<bits/stdc++.h>
using namespace std;

bool func(int arr[] , int idx , int k , vector<int> &ds , int sum){
  
  if(idx == 4) {
    if(sum == k){
      for(auto ele : ds) cout<< ele <<" ";
      cout<<endl;
      return true; //idhar change
    }
    
    return false; //idhar change
  }
  
  //take wala case
  
  ds.push_back(arr[idx]);
  sum+=arr[idx];
  
  if(func(arr , idx+1 , k , ds , sum) ) return true; //idhar change
  
  ds.pop_back();
  sum-=arr[idx];
  
  if(func(arr , idx+1 , k , ds , sum)) return true; //idhar change
  return false;  //idhar change
}

int main(){
  int arr[5] = {1  ,2, 1 , 2 , 4};
  
  int k = 4;
  vector<int> ds;
  func(arr , 0 , k , ds , 0);
}
