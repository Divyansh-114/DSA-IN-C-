#include<iostream>
#include<vector>
using namespace std;
int main(){
         vector<int>v;
         v.push_back(2);
         v.push_back(4);
         v.push_back(2);
         cout<<v.capacity()<<endl;
         cout<<v.size()<<endl;
        //  for(int i=0;i<v.size();i++){
        //     cout<<v[i];
        //  }
         v.pop_back();
         v.pop_back();
         for(int i=0;i<v.size();i++){
            cout<<v[i];
         }
         cout<<v.capacity()<<endl;
         cout<<v.size();



}
