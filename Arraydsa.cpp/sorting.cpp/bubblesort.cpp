#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){ 
    int n=6;
    int arr[n]={5,4,6,3,2,1};
    // first method
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    // cout<<endl;
    // for(int i=0;i<n-1;i++){// n-1 passes
    //     // traverse
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];

    // }
    // 2 method
   for(int i=0;i<n-1;i++){
    bool flag=true;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=false;
        }

    }
    if(flag==true){
        break;
  }
   }
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}