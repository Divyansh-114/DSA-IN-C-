#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<arr+2;//arr is the address 
}