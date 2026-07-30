#include<iostream>
using namespace std;
void display(int arr[],int n,int i){
    if(i==n){
        return;
    }
    // cout<<arr[i]<<" ";// for forward printing
    display(arr,n,i+1);
     cout<<arr[i]<<" ";// for reverse printing
}
int main(){
    int arr[]={2,1,6,3,9,0,2,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}