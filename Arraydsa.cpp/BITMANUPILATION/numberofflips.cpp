#include<iostream>
using namespace std;
int flips(int n,int m){
    int num=n^m;
    return __builtin_popcount(num);
}
int main(){
    int n=20;
    int m=21;
    int result=flips(n,m);
    cout<<result;
    return 0;


}