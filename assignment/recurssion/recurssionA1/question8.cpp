#include<iostream>
using namespace std;
int sumofarr(int arr[],int n,int idx){
    if(n==idx){
        return 0;
    }
    return arr[idx]+sumofarr( arr, n, idx+1);
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int summ = sumofarr(arr,n,0);
    cout << summ;
return 0;
}