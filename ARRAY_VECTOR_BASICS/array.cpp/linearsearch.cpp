#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"enter the array size ";
    cin>>n;
    cout<<"enter entries in array";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int found;
    cout<<"enter the found ";
    cin>>found;
    bool flag=false;

    for(int i=0;i<n;i++){
        if(arr[i]==found)
        flag=true;
    }
    if(flag==true){
        cout<<"element found";
    }
    else{
        cout<<"element not found ";

    }
    return 0;
}
    