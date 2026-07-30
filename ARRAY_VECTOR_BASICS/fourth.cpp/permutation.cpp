#include<stdio.h>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int permutation(int n,int r){
    int permut;
    if(n==r){
        return -1;
    }
    else{
        permut=fact(n)/fact(n-r);
    }
    printf(" the permutstion of given number is%d\n",permut);
    return permut;
}
int combination(int n,int r){
    int combi;
    if(n==r){
        return -1;
    }
    else{
         combi=fact(n)/(fact(n-r)*fact(r));
    }
    printf("the combination is %d",combi);
    return combi;
}
int main(){
int a,b;
printf("enter the number");
scanf("%d %d",&a,&b);
permutation(a,b);
combination(a,b);
return 0;
}
