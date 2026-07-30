#include<iostream>
#include<vector>
using namespace std;
void path(vector<vector<int>>& grid,
          int row,
          int col,
          vector<vector<int>>& visited,
          int &ans){

    int n = grid.size();
    int m = grid[0].size();
    // boundary conditon out of bound index
    if(row<0 || row>=n || col<0 || col>=m)
        return;
    // if the grid has blocked 
    if(grid[row][col]==1)
        return;
    //  already visited
    if(visited[row][col])
        return;
// if we reqach the end 
    if(row==n-1 && col==m-1){
        ans++;
        return;
    }

    visited[row][col]=1;

    path(grid,row+1,col,visited,ans);
    path(grid,row-1,col,visited,ans);
    path(grid,row,col+1,visited,ans);
    path(grid,row,col-1,visited,ans);
    // in backtrack always make it 0 
    visited[row][col]=0;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>grid(n,vector<int>(m));
    vector<vector<int>>visited(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int ans=0;
    path(grid,0,0,visited,ans);
    cout<<ans;
}