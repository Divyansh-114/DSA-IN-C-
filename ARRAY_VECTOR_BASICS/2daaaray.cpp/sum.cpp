#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows";
    cin>>m;
    int n;
    cout<<"enter the nu,ber of column";
    cin>>n;
    int arr[m][n];
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<endl;
    cout<<sum;
    return 0;
}