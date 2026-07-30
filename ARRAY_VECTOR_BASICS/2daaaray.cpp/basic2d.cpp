#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<brr<<endl;// it print the adrres of 1 index
    cout<<brr[1]<<endl;// it print the address of 1st row 
    cout<<brr[1][2];
}