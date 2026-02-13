#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==1)
        return a;
    if(b==0)
        return 1;
    int ans=power(a,b/2);
    if(b%2!=0){
        return ans*ans*a;
    }
    else 
    return ans*ans;
}
int main(){
    // this is more efficient than the previous one
    int a,b;
    cout<<"Enter the number and its power"<<endl;
  cin>>a>>b;
  cout<<power(a,b);
    return 0;  
}   
