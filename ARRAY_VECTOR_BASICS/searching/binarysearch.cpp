#include<iostream>
using namespace std;
int main(){
    // lower bound
    int arr[9]={1,3,5,7,9,11,13,15,17};
    int n=9;
    int low=0;
    int high =n-1;
    int x=18;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
             cout<<arr[mid-1];
            flag=true;
            break;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
     
    }  
      cout<<arr[high];
      
}