#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char>s;
    string str;
    int n=str.length();
    cout<<"enter the concesutive string";
    cin>>str;
    s.push(str[0]);
    for(int i=1;i<n;i++){
        if(s.top()==str[i])
        continue;
        else
        s.push(str[i]);
    }
string ans="";
while(s.size()>0){
    ans= ans+s.top();
    s.pop();
}
cout<<ans;
}