#include<iostream>
using namespace std;
void pip(int n){
    if(n==0){
        return;
    }
    cout<<"pre"<<n<<endl; //pre
    pip(n-1);
    cout<<"in"<<n<<endl; //in
    pip(n-1);
    cout<<"post"<<n<<endl; //post
}
int main(){
    int n;
    cin>>n;
    cout<<"Pre In Post Order Traversal: ";
    pip(n);
        cout<<endl;

    return 0;
}