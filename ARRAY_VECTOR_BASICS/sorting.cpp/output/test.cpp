#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v1(2);
  vector<int>v2(2);
  v1.push_back(1);
  v1.push_back(2);
  v2.push_back(3);
  v2.push_back(4);


    v1.insert(v1.end(),v2.begin(),v2.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];
    }
}