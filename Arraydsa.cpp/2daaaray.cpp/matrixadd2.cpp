#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the no of rows";
    cin>>m;
    int n;
    cout<<"enter the no of column";
    cin>>n;

    int matrix1[m][n];
   
    // filling of 1st matrix
    cout<<"filling of first matrix";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix1[i][j];
        }
    }
        // for 2 matrix
         int matrix2[m][n];
        cout<<"filling of second matrix";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>matrix2[i][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matrix2[i][j]+=matrix1[i][j];
            cout<<matrix2[i][j]<<" ";
        }
    }
