#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>

using namespace std;
int dp[3005][3005];
int arr[3005];
int f(int i,int j){
    if(i==j)
    return arr[i];
    if(i>j)
    return 0;
    return max(arr[i]-f(i+1,j),arr[j]-f(i,j-1));
}

int main(){
  
    // int taro=0;
    // int jiro=0;
    // int i=0;
    // int j=arr.size()-1;
    // int num=0;

    // while(i<=j || j>=i){
    //     if(num%2==0){
    //         if(arr[i]>arr[j]){
    //         taro+=arr[i];
    //         i++;
    //         }
    //         else{
    //             taro+=arr[j];
    //             j--;
    //         }
    //     }
    //     else{
    //         if(arr[i]>arr[j]){
    //         jiro+=arr[i];
    //         i++;
    //         }
    //         else{
    //             jiro+=arr[j];
    //             j--;
    //         }
    //     }
    //     num++;
    // }
    // cout<<taro-jiro;

    // dp solution 

   
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<f(0,n-1);

    

}
