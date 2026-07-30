#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<5;i++){
        if(max1<arr[i]){
            max1=arr[i];
        }
    }
        cout<<max1<<endl;
        for(int i=0;i<5;i++){
            if(arr[i]!=max1 && max2<arr[i]){
                max2=arr[i];
            }
        }
        cout<<max2;
        return 0;
    }
   
