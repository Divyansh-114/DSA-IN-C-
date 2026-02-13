#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int is_prime(int n){
    int count=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i ==0)
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
  if(is_prime(n)==0)
  cout<<"this is prime number";
  else
  cout<<"not a prime number ";
}