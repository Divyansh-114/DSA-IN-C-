#include<iostream>
using namespace std;
int main(){
    int arr[]={3,8,6,7,5,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   int i=0;
   int j=1;
   int idx1=-1;
   int idx2=-1;
   while(j<n){
    if(arr[j]>arr[i]){
        i++;
        j++;
    }
    else{
        if(idx1==-1){
            idx1=i;
            i++;
            j++;
        }
        else{
            idx2=j;
            i++;
            j++;
        }
    }
   }
   swap(arr[idx1],arr[idx2]);
   cout<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}