#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"enter the numbe of rows and column";
cin>>m>>n;
int matrix[m][n];
cout<<"enter the entries in matrix";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}
cout<<endl;
for(int i=0;i<m;i++){
  if(i%2==0){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }

  }
  else{
    for(int j=n-1;j>=0;j--){
        cout<<matrix[i][j]<<" ";
    }
  }
    }
    cout<<endl;
}






