#include<iostream>
using namespace std;
void reversearr(int arr[],int n, int idx){
    if(idx==n){
        return;
    }
    cout<<arr[idx]<<" ";
    cout<<" ";
    reversearr(arr,n,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversearr(arr,n,0);
    return 0;
}