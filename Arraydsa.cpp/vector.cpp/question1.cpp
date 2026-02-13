#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
     a.push_back(3);
    a.push_back(7);
    a.push_back(9);
     a.push_back(2);
    a.push_back(5);
    a.push_back(9);
    // int x=9,idx=-1;
//  for(int i=0;i<a.size();i++){
//     if(a[i]==x){
//         idx=i;
//     }
//  }
//     cout<<idx;
//  return 0;
int x=9,idx;
for(int i=a.size()-1;i>=0;i--){
    if(a[i]==x){
        idx=i;
        break;
    }
}
cout<<idx;
}