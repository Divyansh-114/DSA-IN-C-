#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter the size";
    cin>>m;
    vector<vector<int>>v;
  // this will store the size of rows means they denote the number of rows
    for(int i=0;i<m;i++){
        vector<int>a(i+1);
        v.push_back(a);
            for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    } 
    // 
    // 
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}