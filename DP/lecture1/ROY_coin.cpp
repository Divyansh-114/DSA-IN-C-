#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n,m,l,r,q;
    cout<<"enter the coin days left  right and queries";
    cin>>n>>m>>l>>r>>q;
    vector<int>left;
    vector<int>right;
    unordered_map<int,int> L;
    unordered_map<int,int>R;
    // making the left and the right hashmap
    for(auto i : left){
        L[i]++;
    }
    for(auto i : right){
        R[i]++;
    }
    
    vector<int>ans(100000);
    ans[1]=L[1];

    for(int i =2;i<n;i++){
        ans[i] = L[i]+ans[i-1]-R[i-1];
    }
    // now making the suffix array 
    vector<int>coin;
    for(int i=n;i<=0;i--){
        coin[i]=coin[i]+
    }
    
}