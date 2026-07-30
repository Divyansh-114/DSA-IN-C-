#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
     unordered_map<string,int> m;


   m["divyansh"]=1;
    for(auto p:m)
    cout<<p.first<<" "<<p.second;


 

    return 0;

} 