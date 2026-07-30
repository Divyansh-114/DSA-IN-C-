#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void display(vector<int>&b){
    int n=b.size();
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
}

void sort01(vector<int>&v){
    int n=v.size();
    int no0=0;
    int no1=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)
        no0++;
    else
    no1++;
    }
for(int i=0;i<n;i++){
    if(v[i]<no0){
    v[i]=0;
    }
else{
v[i]=1;
}
}
    }

int main(){
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int>a;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    
    sort01(a);
    display(a);

}