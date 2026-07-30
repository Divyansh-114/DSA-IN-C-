#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size of matrix1";
    cin>>m>>n;
    int p,q;
    cout<<"enter the size of mztrix2";
    cin>>p>>q;
    int matrix1[m][n];
    int matrix2[p][q];
cout<<"filling of the matrix 1";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>matrix1[i][j];
    }
}
cout<<"ente the entries of 2 matrix";
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cin>>matrix2[i][j];
    }
}
cout<<"the resultant matrix is ";
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        matrix1[i][j]+=matrix2[i][j];
    }
}
// the resuatant matrix
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<matrix1[i][j]<<" ";
    }
    cout<<endl;
}
}