#include<iostream>
#include<vector>
using namespace std;
vector<vector<char>> grid;
vector<vector<string>>result;
bool canplacequeen(int row,int col,int n){
    // only check col and diagonal
    for(int i =row-1;i>=0;i--){
        if(grid[i][col]=='Q'){ //  attacked
            return false;
            
        }
    }
    // left diaginal check 
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(grid[i][j]=='Q'){
            return false;
        }
    }
    // right diagonal check 
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(grid[i][j]=='Q'){
            return false;
        }
    }
    return true;

    
}

void f(int row,int n){
    if(row==n){
        // we got one possible ans 
        vector<string>temp;
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               ans+=grid[i][j];
            }
            temp.push_back(ans);
        }
        result.push_back(temp);
        return;
    }


    for(int col=0;col<n;col++){
        if(canplacequeen(row,col,n)){
            grid[row][col]='Q';
            f(row+1,n);
            grid[row][col]='.';
        }
    }
}
vector<vector<string>>nqueens(int n){
    grid.clear();
    result.clear();
    grid.resize(n,vector<char>(n,'.'));
    f(0,n);
}
int main(){
    int n;
    cin>>n;
    nqueens(n);
}
