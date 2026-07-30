#include<iostream>
#include<string>
#include<vector>
using namespace std;
void parenthesis( string ans,int n,int O,int C,vector<string>&v){
if(O==n && C==n){
    v.push_back(ans);
    return;
}
if (O<n)
parenthesis(ans+'(',n,O+1,C,v);
if (O>C && C<n)
parenthesis(ans+')',n,O,C+1,v);
}
int main(){
    int n=3;
    int O=0;
    int C=0;
    string s="";
    vector<string>v;
    parenthesis(s,n,O,C,v);
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}