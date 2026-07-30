#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<pair<int,int>>>graph;
int v; // no of vertices
// making grapg glbally 
void addedge(int src,int dest,int wt,bool bi_dir=true){
    graph[src].push_back({  dest,wt});
    if(bi_dir){
        graph[dest].push_back({  dest,wt});
    }
}
void display(){
    for(int i=0;i<v;i++){
        cout<<i<<"->";
        for(auto j:graph[i]){
            cout<<j.first<<" "<<j.second<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
   graph.resize(v);
    addedge(0,1,10);
    addedge(1,2,10);
    addedge(2,3,10);
    display();
}
