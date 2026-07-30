#include<iostream>
using namespace std;
int fact(int n){
    int factr=1;
    for(int i=1;i<=n;i++){
        factr=factr*i;
    }
    return factr;
}
int main(){
    int n;
    cout<<"ente the number";
    cin>>n;
    int factorial=fact(n);
    cout<<factorial;
    return 0;
}