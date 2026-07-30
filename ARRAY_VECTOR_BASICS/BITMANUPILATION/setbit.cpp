#include<iostream>
using namespace std;
int main(){
int n=0;
int setbit=0;
while(n>0){
    n=n&n-1;
    setbit++;
}
cout<<setbit;
return 0;
}