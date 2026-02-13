#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    int k=3;
    // brute force
        for(int i=0;i<n-k;i++){
            for(int j =i;j<i+k;j++){
                if(arr[j]<0){
                    ans.push_back(arr[j]);
                    break;
                }
            }
        }
            // sliding wimdow
        // int p=0;
        // for(int i=0;i<k;i++){
        //     if(arr[i]<0){
        //         ans.push_back(arr[i]);
        //         int p=i;
        //     }
        // }
        // int i=1;
        // int j=k;
        // while(j<n){
        //     if(p>=i){
        //         ans.push_back(arr[p]);
        //     }
        //     else{
        //         for(int a=i;a<=j;a++){
        //             if(arr[a]<0){
        //                 ans.push_back(arr[a]);
        //                 p=a;
        //                 break;
        //             }
        //         }
        //     }
        //     i++;
        //     j++;
        // }
        for(int i=0;i<n-k;i++){
            cout<<ans[i]<<" ";
        }
    return 0;
    }

