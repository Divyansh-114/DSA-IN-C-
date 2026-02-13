#include<iostream>
using namespace std;
int countdigit(int n){
    if(n==0)
    return 0;
    return 1+countnumber(n/10);
}
int  reverseno(int n,int digits){
    if(n<=0)
    return 1;
    int digits=n%10;
    
  
}
int main(){
    int n=413;
 cout<<reverseno(n);
 return 0;
}