#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>&par,int x){
    // this method return which group x belong to 
    if(par[x]==x)
    return x;

    return par[x]=find(par,par[x]);
}
bool Union(vector<int>&par,vector<int>&rank,int a,int b){
    a=find(par,a);
    b=find(par,b);
    if(b==a)
    return true;

    if(rank[a]>=rank[b]){
        rank[a]++;
        par[b]=a;
        
    }
    else{
        rank[b]++;
        par[a]=b;
        
    }
    return false;

}
int main(){

    vector<int>par={0,1,2,3,4,5,6,7,8,9};
    vector<int>rank(par.size(),1);

   bool b = Union(par,rank,1,2);
    cout<<b;
    Union(par,rank,1,3);

    cout<<find(par,3)<<endl;


    return 0;

} 