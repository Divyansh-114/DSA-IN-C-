#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"its a three digit number ";
    }
    else{
        cout<<"not three digt number ";
    }
}