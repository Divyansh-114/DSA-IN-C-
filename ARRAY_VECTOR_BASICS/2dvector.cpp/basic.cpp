#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v1;
v1.push_back(8);
v1.push_back(8);
v1.push_back(8);
v1.push_back(8);
vector<int>v2;
v2.push_back(3);
v2.push_back(3);
v2.push_back(3);
vector<vector<int>>v;
v.push_back(v1);
v.push_back(v2);
cout<<v.size()<<endl;
cout<<v[0].size();
}