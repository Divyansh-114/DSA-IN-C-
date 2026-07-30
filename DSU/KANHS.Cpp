#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
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

void TOPOBFS(){
    // kanhs algo
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto it:graph[i]){
            indegree[it]++;
        }
    }
// making queue
queue<int>q;
unordered_set<int>st;
for(int i=0;i<v;i++){
    if(indegree[i]==0){
        q.push(i);
        st.insert(i);
    }
}
while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<node<<" ";
    for(auto it:graph[node]){
        // agr already mark hai
       if(not st.count(it)){
        indegree[it]--;
        // agr indegree 0 ho gye to queue m push kro 
        if(indegree[it]==0){
            q.push(it);
            st.insert(it);
        }
       }
    }
}
}

int main(){

    cin>>v;
    graph.resize(v);

    addedge(0,1,false);
    addedge(1,2,false);
    addedge(2,3,false);

    TOPOBFS();
}