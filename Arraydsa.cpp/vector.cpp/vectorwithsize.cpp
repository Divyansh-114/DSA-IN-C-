#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(3,4);
    cout<<v.size();
    cout<<v.capacity();
    cout<<v[2];
}