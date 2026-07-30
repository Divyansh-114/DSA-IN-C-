#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int l,m,n;
    cout<<"enter the values ";
    cin>>m>>n>>l;
    vector<int>dp(1000002,0);
    dp[1]=1;
    dp[l]=1;
    dp[m]=1;
    for(int i=2;i<100000;i++){
        dp[i]=(dp[i-1] and (i-l>=1) ? dp[i-l] : 1  and (i-m>=1) ? dp[i-m] : 1);
    }
    
}