#include<iostream>
using namespace std;
int main(){
    int n ,sum=0;
    cout<<"enter the number ";
    cin>>n;
    int arr[n];
    cout<<"enter the number in the aray";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"the sum is "<<sum;

}