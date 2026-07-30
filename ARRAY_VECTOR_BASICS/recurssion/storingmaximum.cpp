#include<iostream>
#include<climits>
using namespace std;
int maxinarray(int arr[],int n,int idx){
    if(n==idx){
        return INT_MIN;
    }
    // this is for the return the maximum value by always calling the function
    return max(arr[idx],maxinarray(arr,n,idx+1));
}
int main(){
    int arr[]={1,4,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxinarray(arr,n,0);
}