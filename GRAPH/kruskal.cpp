#include<bits/stdc++.h>
#include<vector>
using namespace std;

int find(int x,vector<int>&parent){
    if(parent[x]==x){
        return x;
    }
    return parent[x]=find(parent[x],parent);
}
void Union(int x,int y,vector<int>&parent,vector<int>&rank){
    x=find(x,parent);
    y=find(y,parent);
    if(rank[y]<=rank[x]){
        parent[y]=x;
        rank[x]++;
    }
    else{
        parent[x]=y;
        rank[y]++;
    }
}
// making the edge list 
struct Edge{
    int  src;
    int dest;
    int wt;
};
bool cmp(Edge a,Edge b){
    return a.wt<b.wt;
}

// KRUSKAL ALGO 
int kruskal(vector<Edge>&graph,int n,int e){
    sort(graph.begin(),graph.end(),cmp); // sort the edge lsit o the basis of weight
    vector<int>par(n+1);
    vector<int>rank(n+1,1);
    // first filling the own par 
    for(int i=0;i<=n;i++){
        par[i]=i;
    }
    // now apply the kruskal alg 
    int i =0;
    int ans=0;
    int edgecount=0;

    while(edgecount<n-1 and i<graph.size()){
        Edge curr=graph[i];
        int srcpar=find(curr.src,par);
        int destpar =find(curr.dest,par);
        if(srcpar!=destpar){
            Union(srcpar,destpar,par,rank); // if there is no cycle then we add that weight into the ans 
            ans+=curr.wt;
            edgecount++;
        }
        i++;
    }
    return ans;
}


int main()

{
    int n,e;
    cin>>n>>e;
    vector<Edge>graph;
    for(int i=0;i<e;i++){
        int src,dest,wt;
        cin>>src>>dest>>wt;
        graph.push_back({src,dest,wt});
    }
    cout<<kruskal(graph,n,e);

}