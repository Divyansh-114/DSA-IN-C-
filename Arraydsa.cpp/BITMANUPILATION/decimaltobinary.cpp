#include<iostream>
using namespace std;
string binary(int n){
    int num=n;
      string ans="";
    while(num>0){
        if(num%2==0){
            ans="0"+ans;
        }
        else{
            ans="1"+ans;
        }
        num==num>>1;
    }
    return ans;
}
int main(){
    int n=18;
    cout<<binary(n)<<"";
}