#include<iostream>
using namespace std;    
int main(){
    int arr[9]={0,1,2,3,4,5,7,8,9};
    int n=9;
    int flag=true;
    int ans= -1;
    // linear search
    // for(int i=0;i<n;i++){
    //     if(i!=arr[i]){
    //         cout<<i;
    //         break;
    //     }
    // }// binary search
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;

        }
    }
    cout<<ans;
     
}