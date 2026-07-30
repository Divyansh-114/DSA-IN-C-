#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    vector<int>a;
    int n;
    cout<<"enter teh size of vector";
    cin>>n;
    cout<<"enter the element int the array";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
for(int i=0;i<n/2;i++){
    swap(&a[i],&a[n-i-1]);
}
cout<<"reversed array";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}