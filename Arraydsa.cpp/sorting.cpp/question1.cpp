#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[5]={10,12,15,9,8};
    vector<int>v(5,0);
    int x=0;
        for(int i=0;i<5;i++){
            int min=INT_MAX;
            int mindex=-1;
            for(int j=0;j<5;j++){
                if(v[j]==1)
                continue;
            else{
                if(min>arr[j]){
                    min=arr[j];
                    mindex=j;
                }
            }

            }
            arr[mindex]=x;
            x++;
            v[mindex]=1;


  }
  for(int i=0;i<5;i++){
    cout<<arr[i];
  }
}