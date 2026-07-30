#include<iostream>
#include<vector>
#include<cstring>
#include<climits>
#include<algorithm>

#define ll long long int
using namespace std;
ll dp[105][105];


ll g(vector<int>color,int i,int j){
    int result =0;
    for(int m=i;m<=j;m++){
            result = (result%100 + color[m]%100)%100;
    }
    return result;
}
ll mixtures(vector<int>color,int i,int j){
    if(i==j)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    ll result =INT_MAX;

    for(int k=i;k<j;k++){
        
        result =min(result,mixtures(color,i,k) + mixtures(color,k+1,j) + g(color,i,k)*g(color,k+1,j));
    }
    return dp[i][j]=result;

}
int main(){
    int n;
    while(cin>>n){
        vector<int>color(n);
        for(int i=0;i<n;i++)
        cin>>color[i];
        memset(dp,-1,sizeof(dp));
        cout<<mixtures(color,0,n-1)<<endl;
    }
     
}