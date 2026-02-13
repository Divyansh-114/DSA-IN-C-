#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0){
        return;
    }
    cout<<"pre"<<n<<endl; //pre
    zigzag(n-1);
    cout<<"in"<<n<<endl; //in
    zigzag(n-1);
    cout<<"post"<<n<<endl; //post
}   
int main(){
    int n;
    cin>>n;
    cout<<"Zig Zag Order Traversal: ";
    zigzag(n);
        cout<<endl;

    return 0;
}