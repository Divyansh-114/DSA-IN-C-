#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int display(vector<int>&b){
   b[0]=100;
   for(int i=0;i<3;i++){
      cout<<b[i]<<" ";
   }
}

int main(){
vector<int>a;
a.push_back(3);
a.push_back(9);
a.push_back(8);
for(int i=0;i<3;i++){
   cout<<a[i]<<" ";
}
cout<<endl;
display(a);
cout<<endl;

for(int i=0;i<3;i++){
   cout<<a[i]<<" ";
}
}
