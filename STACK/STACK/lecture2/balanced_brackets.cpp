#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool Balanced_brackets(string str,stack<char>&s){
    int n=str.length();
    if(n%2!=0)
    return false;
    for(int i=0;i<n;i++){
        if(str[i]=='(')
        s.push(str[i]);
        else if(str[i]==')' && s.empty())
        return false;
        else
        s.pop();
    }
    if(s.size()==0)
    return true;
    
    return false;

}
int main(){
    stack<char> s;
    string str;
    cout<<"enter the bracket size";
    cin>>str;
    bool ans=Balanced_brackets(str,s);
    cout<<"the bracket is "<<ans;
    return 0;


}