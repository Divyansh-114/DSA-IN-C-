#include<iostream>
using namespace std;
bool powerof(int n){
    if(n==1)
    return true;
    if(n%2!=0)
    return false;
    powerof(n/2);
}
int main(){
    int n=64;
    cout<<powerof(n);
}