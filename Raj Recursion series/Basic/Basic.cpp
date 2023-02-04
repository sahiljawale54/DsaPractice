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

