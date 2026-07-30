#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[9]={1,3,5,7,9,11,13,15,17};
    int n=9;
    int low=0;
    int high=n-1;
    bool flag=true;
    int x=10;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            cout<<arr[mid+1];
            flag=false;
            break;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==true){
        cout<<arr[low];
    }
}