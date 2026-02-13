#include<iostream>
using namespace std;
int stairpath(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    else
    return stairpath(n-1)+stairpath(n-2);
}
int main(){
    int n;
    cout<<"Enter the number of stairs"<<endl;
  cin>>n;
  cout<<stairpath(n);
    return 0;
}