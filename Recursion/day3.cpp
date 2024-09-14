#include<iostream>
#include<vector>
#include<string>
using namespace std;


void solve(vector<int>& arr,vector<vector<int>>& subarr,vector<int> temp,int i){

    // basecase
    if(i>= arr.size()){
        subarr.push_back(temp);
        return;
    }

    // excalude
    solve(arr,subarr,temp,i+1);

    // include
    temp.push_back(arr[i]);
    solve(arr,subarr,temp,i+1);
}

// STRING SUBSEQUENCE

void subsque(string s,vector<string>& ans,string temp,int i){

    // basecase
    if(i >= s.size()){
        ans.push_back(temp);
        return;
    }

    // exclude
    subsque(s,ans,temp,i+1);

    // include
    temp+= s[i];
    subsque(s,ans,temp,i+1);
}

int main(){

    vector<int> arr{1,2,3};
    vector<vector<int>> subarr;
    vector<int> temp;

    solve(arr,subarr,temp,0);

   cout<< "subarray"<<endl;
    for(int i=0;i<subarr.size();i++){
        
        for(int j=0;j<subarr[i].size();j++){
            cout<< subarr[i][j]<< " ";
        }
        cout<<endl;
    }

    string str= "abcd";
    vector<string> ans;
    string demo= "";

    subsque(str,ans,demo,0);

    cout<< endl<< "Subsquence of the string: "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<< i<< " "<< ans[i]<< endl;
    }
}