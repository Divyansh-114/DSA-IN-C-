#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows and column";
    cin>>m>>n;
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j];
        }
    }
  
    
    cout<<endl;
}
