#include<iostream>
using namespace std;
int power(int a,int b){
    if(a==0){
        return 0;
    }
    if(b==0)
        return 1;
        else
        return a*power(a,b-1);
    
// }
int main(){
    int a,b;
    cout<<"Enter the number and its power"<<endl;
  cin>>a>>b;
  cout<<power(a,b);
    return 0;  
}
// int a,b;
// cout<<"Enter the number and its power"<<endl;
// cin>>a>>b;
// int ans=1;
// for(int i=1;i<=b;i++){
// ans=ans*a;
// }
// cout<<ans;
// return 0;
