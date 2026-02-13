#include<iostream>
using namespace std;
void greet(int n){
    if(n==0){
        return;
    }
    cout<<"Hello World"<<endl;
    greet(n-1);
}
int main(){
int n;
cout<<"Enter the number of times you want to print Hello World"<<endl;
cin>>n;
greet(n);   
return 0;
}