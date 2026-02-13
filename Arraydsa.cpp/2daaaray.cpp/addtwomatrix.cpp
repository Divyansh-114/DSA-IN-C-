#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows and column of first matrix";
    cin>>m>>n;
    int a,b;
    cout<<"enter the rows and column of 2 matrix";
    cin>>a>>b;
    if(m!=a && n!=b){
        cout<<"the matrix addition is not possible";
    }
    int matrix1[m][n];
    cout<<"enter the entries in 1 matrix";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"enter the entries in the second matrix";
    int matrix2[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>matrix2[i][j];
        }
    }
int matrix3[m][b];
for(int i=0;i<m;i++){
    for(int j=0;j<b;j++){
        matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    }
}
cout<<"additon matix is "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<b;j++){
        cout<<matrix3[i][j]<<" ";
    }
    cout<<endl;
}

}