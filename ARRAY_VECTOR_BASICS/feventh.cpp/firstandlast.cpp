#include<iostream>
using namespace std;
void LA(int a, int *b,int*c){
    *b=a%10;
    cout<<*b<<endl;
    while(a>9){
        a=a/10;
    }
*c=a;
cout<<*c;

    }
int main(){
    int n=234,F,L;
    int *p1=&F;
    int*p2=&L;
    LA(n,p1,p2);
return 0;
}