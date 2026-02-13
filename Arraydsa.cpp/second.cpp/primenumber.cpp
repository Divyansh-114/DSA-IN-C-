#include<iostream>
using namespace std;    
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n==0){
        cout<<"0 is neither prime nor composite";
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("not prime");
            break;
        }
        else{
            printf("prime");
            break;
        }
    }
}