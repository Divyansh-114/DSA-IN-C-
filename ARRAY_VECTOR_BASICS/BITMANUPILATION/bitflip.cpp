#include<iostream>
using namespace std;
int rever_bit(int n){
    int num=n;
    n=n|n>>1;
    n=n|n>>2;
    n=n|n>>4;
    n=n|n>>8;
    n=n|n>>16;
    num=num^n;
    return num;

}
int main(){
    int n=8;
    cout<<rever_bit(n);
}