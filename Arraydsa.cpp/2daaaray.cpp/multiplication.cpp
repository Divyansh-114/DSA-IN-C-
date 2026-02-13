#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows and column of 1 matrix";
    cin>>m>>n;
    int p,q;
    cout<<"enter the rows and column of 2 matrix";
    cin>>p>>q;
    if(n!=p){
        cout<<"multiplication of matrix is not possible";
    }
    int matrix1[m][n];
    int matrix2[p][q];
    cout<<"enter the entries of 1 matrix";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"enter the entries of second matrix";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>matrix2[i][j];        
        }
    }

cout<<"the third matix is ";
int matrix[m][q];

for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        matrix[i][j]=0;
        for(int k=0;k<n;k++){
            matrix[i][j]+=matrix1[i][k]*matrix2[k][j];
        }
    }
}
cout<<"the multiplication of the matrix is"<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
}
