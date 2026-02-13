#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    int n=s.length();
    cout<<s.substr(n/2,n);

}