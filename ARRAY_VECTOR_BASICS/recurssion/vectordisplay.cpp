#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v,int idx){
    if(idx==v.size()){
        return;
    }
    cout<<v[idx]<<" ";
    cout<<endl;// for forward printing
    display(v,idx+1);

    cout<<v[idx]<<" "; // for reverse printing
}
int main(){
    vector<int>v={2,1,6,3,9,0,2,7,4};
    display(v,0);
    return 0;
}