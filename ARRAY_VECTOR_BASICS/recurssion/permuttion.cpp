#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutation(vector<string>&v,string original,string ans){
    if(original==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(v,right+left,ans+ch);
    }
    return;
}
int main(){
    string original="abc";
    string ans="";
    permutation(original,ans);
    return 0;
}