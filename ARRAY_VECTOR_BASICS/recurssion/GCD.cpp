#include<iostream>
using namespace std;
int  GCD(int a,int b){
    if(a==0)
    return b;
        else
        return GCD(b%a,a);
    }
    int main(){
        int a=27;
        int b=18;
            int gcd=GCD(a,b);
            cout<<gcd;
            return 0;
    
    }
