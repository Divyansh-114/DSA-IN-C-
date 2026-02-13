#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // formation of prefix sum 
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool check=false;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            cout<<i<<" ";
            check=true;
        }
    }
    if(check==false){
        cout<<" not possile";
    }
    return 0;
}