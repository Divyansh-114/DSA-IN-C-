#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void reverse(int i,int j,vector<int>&a){

    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }

}
int main(){
    vector<int>b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    b.push_back(5);
    for(int i=0;i<5;i++){
        cout<<b[i];
    }
    reverse(0,4,b);
    reverse(0,3,b);
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<b[i];
    }
    return 0;
}