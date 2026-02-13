#include<iostream>
using namespace std;
int reverseno(int num){
    static int ans =0;
    if(num<=0){
        return ans;
    }
     int digit=num%10;
     ans=ans*10+digit;
     reverseno(num/10);
}
    

int main(){
    int n=123;
    cout<<reverseno(n);
}