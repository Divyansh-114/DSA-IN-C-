#include<iostream>
using namespace std;
int main(){
    int arr[]={4,4,1,3,1,3,5};
    int n=7;
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    }
    cout<<result;
    return 0;

}
 