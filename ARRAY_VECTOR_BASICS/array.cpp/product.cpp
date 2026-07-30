#include<iostream>
using namespace std;
int main(){
    int n,pro=1;
    cout<<"enter the numerbs";
    cin>>n;
    int arr[n];
    cout<<"enter the number in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        pro=pro*arr[i];

    }
    cout<<"the product is "<<pro;
}