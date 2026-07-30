#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
vector<list<int>>graph;
int v; // no of vertices
// making grapg glbally 
void addedge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void BFS(int src,int dest,vector<int>&dist){
    queue<int>q;
    q.push(src);
    dist[src]=0;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto nbr:graph[curr]){
            if(dist[nbr]==-1){
                dist[nbr]=dist[curr]+1;
                q.push(nbr);
            }
        }
    }
}
int main(){
    cin>>v;
    graph.resize(v);
    addedge(0,1);
    addedge(1,2);
    addedge(2,3);
    display();
}
