#include<iostream>
using namespace std;
int main(){
    int arr[8]={12,13,14,15,16};
    arr[3]=18;//updation now  the value get changed 
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    
}