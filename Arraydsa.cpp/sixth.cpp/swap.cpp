#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a,b;
    cout<<"enter the number";
    cin>>a>>b;
  int swapping=printf("%d",swap(a,b));
  return 0;
}