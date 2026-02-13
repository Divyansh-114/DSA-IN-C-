#include<iostream>
#include<vector>
using namespace std;
  
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    printarray(arr,n,0,v);
    return 0;
}
