#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void sort02(vector<int>&a, int sze){
    int i=0;
    int j=sze-1;
    while(i<j){
        if(a[i]==0){
            i++;
        }
        if(a[j]==1){
            j--;
        }
        if(i>j){
            break;
        }
        if(a[i]==1 && a[j]==0){
            a[i]=0;
            a[j]=1;
            i++;
            j--;
        }
    }
 
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);

    sort02(v,v.size());

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }


    return 0;
}
 