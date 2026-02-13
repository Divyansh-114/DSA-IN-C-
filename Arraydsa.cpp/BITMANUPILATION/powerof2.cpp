#include<iostream>
using namespace std;
int max_power(int n){
    int result=0;
    n=n|n>>1;
    n=n|n>>2;
    n=n|n>>4;
    n=n|n>>8;
    n=n|n>>16;
result=(n+1)/2;
return result;
}
int main(){
    int n=243;
    cout<<max_power(n);
}