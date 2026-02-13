#include<iostream>
using namespace std;
int main(){
    // int x=4;
    // int* p=&x;
    // cout<<&x<< " "<<p<<" "<<&p;
    int x=20;
    int* p=&x;
    *p=120;
    cout<<*p<<endl;
    *p=*p+1;
    cout<<*p;
}