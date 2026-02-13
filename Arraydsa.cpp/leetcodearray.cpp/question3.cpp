#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse(vector<int>&a){
    int n=a.size();
    int low=0;
    int high=n-1;
    while(low<high){
        if(a[low]<0){
            low++;
        }
       else if(a[high]>0){
            high--;
        }
        else{
          swap(a[low],a[high]);
            low++;
            high--;
        } 
    }
      cout<<endl;
              for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
              }
}
int main(){
    vector<int>a;
    a.push_back(5);
      a.push_back(4);
        a.push_back(-8);
          a.push_back(-5);
            a.push_back(-2);
              a.push_back(1);
              for(int i=0;i<a.size();i++){
                cout<<a[i];
              }
              reverse(a);
return 0;
}