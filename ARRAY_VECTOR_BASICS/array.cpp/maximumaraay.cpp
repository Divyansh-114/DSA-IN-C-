#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,6,5,4,3};
    int max=arr[0];
    for(int i=1;i<4;i++){
        if(max<arr[i]){
            max=arr[i];
        }

    }
    cout<<max;
    return 0;

}