#include<iostream>
using namespace std;
// rever the string

void reverse(string& str,int i,int j){

    if(i >= j){
        return;
    }

    swap(str[i],str[j]);
    i++,j--;
    reverse(str,i,j);
}

// check palindrom 

bool isPalindrom(string& s,int i,int j){

    if(i>= j){
        return true;
    }

    if(s[i] != s[j]){
        return false;
    }

    return isPalindrom(s,i+1,j-1);
}

// find a^b write down the recurtive funtion

int apowerb(int a,int b){

    if(b == 1){
        return a;
    }
    if(b == 0){
        return 1;
    }

    int ans= apowerb(a,b/2);

    if(b%2 == 0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}


int main(){

    string s= "abba";
    // reverse(s,0,s.size()-1);
    
    //  cout<< s<< " isPlindrom: "<< isPalindrom(s,0,s.size()-1)<<endl;
    //  cout<< "Reverse String: "<<s;

    cout<< apowerb(5,4);
}