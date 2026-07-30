#include<iostream>
using namespace std;
int fibbo(int n){
    if(n==0){
        return 0;
}
    if(n==1){
        return 1;
    }
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<fibbo(n);
cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<fibbo(i)<< " ";
    }
    return 0;
}