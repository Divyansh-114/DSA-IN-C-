#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printsubsets(string ans,string str,int idx,vector<string>&v){
    char ch=str[idx];
    if(idx==str.length()){
    v.push_back(ans);
    return;
    }
printsubsets(ans+ch,str,idx+1,v);
printsubsets(ans,str,idx+1,v);
}
int main(){
    vector<string>v;
    string str="abc";
    printsubsets("",str,0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}