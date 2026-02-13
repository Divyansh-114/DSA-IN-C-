#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int *ptr=arr;
    cout<<ptr<<endl;
    for(int i=0;i<4;i++){
        cout<<*ptr<<endl ;
        ptr++;
    }
    cout<<ptr;
}