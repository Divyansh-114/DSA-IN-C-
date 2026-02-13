#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the size of array";
    cin>>x;

    int arr[x];
    cout<<"enter the entries in array";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int n,count=0;
    cout<<"enter the number that you want to count the number which are smaller than that number ";
    cin>>n;
    for(int i=0;i<5;i++){
        if(n>arr[i]){
            count=count+1;
        }
    }
    cout<<count;
}