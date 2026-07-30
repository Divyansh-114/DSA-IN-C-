#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]{12,3,1,6,6,6,6,4,3,8,13,13,13,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int len=0;
    int i=0;
    int j=0;
    while(j<n){
        if(arr[i]==max){
            j++;
            len=j-i-1;
        }
        else{
            i++;
            j++;
        }
    }
    cout<<len;
    
}