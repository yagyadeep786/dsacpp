#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

   vector<int> arr{1,9,2,8,3,7,4,6,5};

    sort(arr.begin(),arr.end());

     vector<int> ans;
    for(int i=0,j=arr.size()-1;i<=j;i++,j--){

     ans.push_back(arr[i]);
     if(i != j){
     ans.push_back(arr[j]);
     }
    }
  
    arr= ans;
    for(int i=0;i<arr.size();i++){
        cout<< arr[i]<< " ";
    }
}