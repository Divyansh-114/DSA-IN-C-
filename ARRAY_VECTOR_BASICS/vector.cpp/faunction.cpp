#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>&b){
    b[0]=100;
    for(int i=0;i<b.size();i++){
        cout<<b[i];
    }
}
int main(){
    vector<int>a;
    a.push_back(3);
    a.push_back(7);
    a.push_back(9);
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    cout<<endl;
    
change(a);
cout<<endl;
   for(int i=0;i<a.size();i++){
        cout<<a[i];
    }


return 0;
}