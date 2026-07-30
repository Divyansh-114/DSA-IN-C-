#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows";
    cin>>m;
    int n;
    cout<<"enter the number of column";
    cin>>n;
    cout<<"enter the entries";
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];// hm yhi pr change kr dege 
        }
    }
    cout<<endl;
  for(int i=0;i<m;i++){
    for(int j=i+1;j<n;j++){
       swap(matrix[i][j],matrix[j][i]);      
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}