#include<iostream>
#include<climits>
using namespace std;
void printmax(int arr[],int n,int idx,int max){
    if(n==idx){
        cout<<max;
        return;
    }
    if(arr[idx]>max)
    max=arr[idx];
        printmax(arr,n,idx+1,max);
}
int main(){
    int arr[]={1,2,3,4,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printmax(arr,n,0,INT_MIN);
}