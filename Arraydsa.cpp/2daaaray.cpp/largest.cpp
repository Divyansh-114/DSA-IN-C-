#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows";
    cin>>m;
    int n;
    cout<<"enter the number of column";
    cin>>n;   
int arr[m][n];


    cout<<"enter the entrie";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int largest=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>largest)
                largest=arr[i][j];
            
        }
   
    }
       cout<<largest;
    return 0;
}