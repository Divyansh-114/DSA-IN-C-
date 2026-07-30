#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>merge(vector<int>&arr1,vector<int>&arr2){
    int m=arr1.size();
    int n=arr2.size();
    vector<int>arr3(m+n);
    int i=0;//arr1
int j=0;//arr2
int k=0;//arr3
 while(i<m && j<n){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    else{
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    if(i==m){// first array pura bhr chuka hai 
    while(j<n){
        arr3[k]=arr2[j];
        j++;
        k++;
        }
    }
        if(j==n){//arr 2 pura bhr chuka hai 
while(i<m){
    arr3[k]=arr1[i];
    i++;
    k++;
}
        }
}
return arr3;

 }

int main(){
    vector<int>arr1(4);
    arr1.push_back(1);
     arr1.push_back(2);
      arr1.push_back(3);
       arr1.push_back(4);
vector<int>arr2(6);
  arr2.push_back(5);
    arr2.push_back(6);
      arr2.push_back(7);
        arr2.push_back(8);
          arr2.push_back(9);
            arr2.push_back(10);
vector<int>v=merge(arr1,arr2);
for(int i=0;i<v.size();i++){
    cout<<v[i];
}
        


}