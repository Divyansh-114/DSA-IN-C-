#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s;
cout<<"enter the string";
getline(cin,s);
stringstream a(s);
string temp;
while(a>>temp){
    cout<<temp<<endl;
}
}