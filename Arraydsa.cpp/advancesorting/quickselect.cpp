#include<iostream>
using namespace std;
int partition(int arr[],int si,int en,int n){
    int pivot=arr[(si+en)/2];
    int pivotidx=(si+en)/2;
    int count=0;
    for(int i=si;i<=en;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    swap(arr[pivotidx],arr[si+count]);
        int i=si;
        int j=en;
  while(i<=(si+count) && j>=(si+count)) { 
    if(arr[i]<arr[pivotidx])
    i++;
    if(arr[j]>arr[pivotidx])
    j--;
    else if(arr[i]>arr[si+count] && arr[j]<arr[si+count]){
        swap(arr[i],arr[j]);
        }
    }
    return (si+count);
}
int kthno(int arr[],int n,int si,int en,int k){
    int pi=partition(arr,n,si,en);
    if(pi+1==k)
    return arr[pi];
    else if((pi+1)<k)
    return kthno(arr,n,pi+1,en,k);
    else if((pi+1)>k)
    return kthno(arr,n,si,pi-1,k);
    return -1;
}
int main(){
    int arr[]={5,1,8,7,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
   cout<< kthno(arr,n,0,n-1,k);
}
