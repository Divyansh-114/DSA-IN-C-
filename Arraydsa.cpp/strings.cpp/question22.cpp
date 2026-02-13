#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string name";

    getline(cin,s);
        int n=s.length();
    reverse(s.begin(),s.begin()+n/2);
cout<<s;
}