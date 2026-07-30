#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={5,3,1,4,2};
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<4;i++){
       int min=INT_MAX;
       int mindex=-1;
       for(int j=i;j<5;j++){
        if(arr[j]<min){
            min=arr[j];
            mindex=j;
        }
       }
       swap(arr[i],arr[mindex]);

    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}