#include<iostream>
using namespcce std;
int main(){
    int n,revnum=0;digit;
    cout<<"enter the number: ";
    cin>>n;
    while(n>0){
        digit=n%10;
        revnum=revnum*10+digit;
        n=n/10;
    }
}