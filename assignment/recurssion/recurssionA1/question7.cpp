#include<iostream>
#include<climits>
using namespace std;
int minimum(int arr[],int n,int idx,int mini)
// int minimum(int arr[],int n,int idx){
//     static int min=INT_MAX;
//     if(idx==n){
//         return min;
//     }
//     if(min>arr[idx]){
//         min=arr[idx];
//     }
//     minimum(arr,n,idx+1);
}
int main(){
    int arr[]={5,4,3,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=minimum(arr,n,0);
    cout<<min;
    return 0;
}