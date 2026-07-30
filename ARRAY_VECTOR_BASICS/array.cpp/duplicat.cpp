#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"enter the entries in aray";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    for(int i=1;i<n;i++){
        if(arr[0]==arr[i]){
            cout<<"duplicat element found";
            break;
        }
    else{
    cout<<"there is no duplicate elemt ";
    }
}
    return 0;

}