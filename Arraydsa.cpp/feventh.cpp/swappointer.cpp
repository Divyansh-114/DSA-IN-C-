#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    cout<<"enter the value";
    cin>>a>>b;
    int* x=&a;
    int* y=&b;
    swap(x,y);
    cout<<a<<b;
}