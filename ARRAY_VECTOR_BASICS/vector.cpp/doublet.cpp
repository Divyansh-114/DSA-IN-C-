#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
        int n;
    cout<<"enter the size of the vector";
    cin>>n;
    cout<<"enter the entries in the the vector";
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
}
int target;
cout<<"ente the target value";
cin>>target;
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(target==a[i]+a[j]){
            cout<<i<<j<<endl;
        }
    }
   }
}