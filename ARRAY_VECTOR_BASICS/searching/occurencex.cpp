#include<iostream>
using namespace std;
int firstoccur(int nums[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]==x){
                high=mid-1;
            }
            else{
                return mid;
            }
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[9]={1,2,2,3,3,3,4,4,4};
    int x=2;
    int n=9;
    int low=0;
    int high=nums.size();
    // while(low<=high){
    //     int mid=low+(high-low)/2;
    //     if(arr[mid]==x){
    //         if(arr[mid-1]==x){
    //             high=mid-1;
    //         }
    //         else{
    //             cout<<mid;
    //             break;
    //         }
    //     }
    //     else if(arr[mid]<x){
    //         low=mid+1;
    //     }
    //     else{
    //         high=mid-1;
    //     }
    // }
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if((arr[mid+1])==x){
                low=mid+1;
            }
            else{
                cout<<mid;
                break;
            }
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}