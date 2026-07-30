#include<iostream>
#include<vector>
#include<list>
#include<unordered_Set>
unordered_set<int>visited;
using namespace std;
vector<list<int>>graph;
int v; // no of vertices
// making graph glbally 
void addedge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int node,unordered_set<int>&visited){
    visited.insert(node);
    for(auto neighbour : graph[node]){
        if(not visited.count(neighbour)){
            visited.insert(neighbour);
            dfs(neighbour,visited);
        }
    }
}
int conected_component(){
    int result=0;
    unordered_set<int>visited;
    for(int i=0;i<v;i++){
        // go to every vertec 
        if(visited.count(i)==0){
             result++;
            dfs(i,visited);            
        }
    }
    return result;
}
int main(){
    cin>>v;
    graph.resize(v);
    addedge(0,1);
    addedge(1,2);
    addedge(2,3);
    cout<<conected_component();
}
