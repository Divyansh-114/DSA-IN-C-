#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void reverse(vector<int>&a,int k,int i,int j ){
    
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
    int main(){
        vector<int>a;
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);
        a.push_back(5);
        int n=a.size();
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
        int k;
        cout<<"enter the value how many number you have to rotate";
        cin>>k;
        if(k>n)
        k=k%n;
        reverse(a,k,0,n-k-1);
        reverse(a,k,n-k,n-1);
        reverse(a,k,0,n-1);
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
    
    return 0;
}
