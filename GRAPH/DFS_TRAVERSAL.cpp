#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>>graph;
unordered_set<int>visited;
int v; // no of vertices
// making grapg glbally 
void addedge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
bool DFS(int curr,int end){
    if(curr==end)
    return true;
    visited.insert(curr);
    for(auto i:graph[curr]){
        if(visited.find(i)==visited.end()){
            if(DFS(i,end))
            return true;
        }
    }
    return false;
}
bool anypath(int start,int end){
    return DFS(start,end);
}
int main(){
    cin>>v;
    graph.resize(v);
    addedge(0,1);
    addedge(1,2);
    addedge(2,3);
    addedge(3,0);
    addedge(1,4);
    addedge(4,5);
    cout<<anypath(0,5);
}
