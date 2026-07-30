#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=36;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" "<<n/i;
            cout<<endl;
        }
