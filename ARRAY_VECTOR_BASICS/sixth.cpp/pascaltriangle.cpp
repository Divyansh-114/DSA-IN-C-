#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
         fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int combi;
    combi=factorial(n)/(factorial(r)*factorial(n-r));
    return combi;
}
int main(){
int n=4;
for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
        cout<<combination(i,j);
    }
    cout<<endl;

}
return 0;
}