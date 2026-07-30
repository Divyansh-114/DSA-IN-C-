#include<iostream>
#include<vector>
using namespace std;

bool issafe(vector<vector<int>>&grid,int row,int col,int val){
    // yha 4 cheeze check hoge same row same column or same big cell 

    for(int i=0;i<9;i++){
        // y same col k liye 
        if(grid[i][col]==val){
            return false;
        }
    }
    for(int i=0;i<9;i++){
        if(grid[row][i]==val){
            return false;
        }
    }

    int x = row/3 * 3;
    int y = col/3 *3;

    for(int i=x;i<x+3;i++){
        for(int j=y;j<y+3;j++){
            if(grid[i][j]==val){
                return false;
            }
        }
    }

    return true;
    } 

  



bool Suduko(vector<vector<int>>&grid,int row,int col){
    int n=grid.size();
    int m =grid[0].size();
    
    // base case 
    // y to sudkodo pura solve ho gya 
    if(row==n){
        return true;
    }
    // y next line m lane k liye 
    if(col==m){
        Suduko(grid,row+1,0);
    }
    // y agr already fill ho gya
    if(grid[row][col]!=0){
        return Suduko(grid,row,col+1);
    }

    for(int i=1;i<=9;i++){
        if(issafe(grid,row,col,i)){
            grid[row][col]=i;
            bool next=Suduko(grid,row,col+1);
            if(next){
                return true;
            }
        }
        grid[row][col]=0;
    }


    return false;



}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>grid(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    cout<<Suduko(grid,0,0);
}
