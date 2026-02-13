#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter the first string";
    cin>>s;

    string t;
    cout<<"enter the second string";
    cin>>t;
    int n=s.length();
    int m=t.length();
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
    if(s==t){
        cout<<"it is valid anagram";  
    }
    else{
        cout<<"not a valid anagram";
    }
    
    
}