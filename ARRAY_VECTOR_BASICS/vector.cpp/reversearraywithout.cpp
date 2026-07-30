#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
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

int low=0;
int high=n-1;
while(low<high){
    swap(a[low],a[high]);
    low++;
    high--;
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}
