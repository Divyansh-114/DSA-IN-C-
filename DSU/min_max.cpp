#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int find(vector<int>&par,int x){
    if(par[x]==x)
    return x;
    return par[x]=find(par,par[x]);
}
void Union(vector<int>&maximal,vector<int>&minimal,vector<int>&par,vector<int>&size,int a,int b){
    a=find(par,a);
    b=find(par,b);
    if(size[a]>=size[b]){
        size[a]+=size[b];
        par[b]=a;
        maximal[a]=max(maximal[a],maximal[b]);
        minimal[a]=min(minimal[a],minimal[b]);
    }
    else{
        size[b]+=size[a];
        par[a]=b;
        maximal[b]=max(maximal[a],maximal[b]);
        minimal[b]=min(minimal[a],minimal[b]);
    }
}
int main(){
    vector<int>par={0,1,2,3,4,5,6,7,8,9};
    vector<int>size(par.size(),1);
    vector<int>maximal(par.size(),INT_MIN);
    vector<int>minimal(par.size(),INT_MAX);
    Union(maximal,minimal,par,size,1,2);
    cout<<find(par,1)<<endl;
    cout<<maximal[1]<<" "<<minimal[1]<<endl;
    Union(maximal,minimal,par,size,1,3);
    cout<<find(par,3)<<endl;
    
}