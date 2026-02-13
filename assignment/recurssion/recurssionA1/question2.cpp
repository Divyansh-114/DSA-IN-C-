#include<iostream>
using namespace std;
int sumof(int a,int b){
    if(a>b)
    return 0;

    if(a%2==0)
    return a+sumof(a+2,b);
    else
    return sumof(a+1,b);

}
int main(){
    int a=10;
    int b=20;
    cout<<sumof(a,b);
    return 0;
}