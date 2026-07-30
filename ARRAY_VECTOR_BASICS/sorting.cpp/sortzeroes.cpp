#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of aaray";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}