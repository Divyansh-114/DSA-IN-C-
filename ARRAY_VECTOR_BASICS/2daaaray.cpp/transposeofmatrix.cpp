#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows";
    cin>>m;
    int n;
    cout<<"enter the number of column";
    cin>>n;
    cout<<"enter the entries in 1st matrix";
    int matrix1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix1[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // printing transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix1[j][i];
        }
        cout<<endl;
    }
        cout<<endl;
    }
