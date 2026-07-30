// #include<iostream>
// #include<stdio.h>
// using namespace std;    
// int main(){
// //     float x;
// //     cout<<"enter the number";
// //     cin>>x;
// //     int y=(int)x;
// //     float z=x-y;
// //     cout<<z;
// // int nnum1;
// // int p=5,q=10;
// // p+=q-=p;
// // cout<<p<<" "<<q;
// int n;
// printf("enter the number ");
// scanf("%d",&n);
// if((n>>1)<<1){
//     printf("even");
// }
// else{
//     printf("odd");
// }
// return 0;
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
  while(n>0){
    
    int temp=n%10;
    sum=sum+temp;
    n=n/10;
   
  
  }
  printf("Sum of digits: %d\n", sum);
    return 0;  
}