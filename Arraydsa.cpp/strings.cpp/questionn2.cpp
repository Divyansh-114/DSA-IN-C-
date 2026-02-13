#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s;
cout<<"enter thhe string";
getline(cin,s);
int n=s.length();
reverse(s.begin()+2,s.begin()+5);
cout<<s;
}