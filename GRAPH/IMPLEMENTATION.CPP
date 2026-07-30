#include<iostream>
#include<vector>
#include<list>
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
void display(){
    for(int i=0;i<v;i++){
        cout<<i<<"->";
        for(auto j:graph[i]){
            cout<<j<<" ";
        }
        cout<<endl;
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
