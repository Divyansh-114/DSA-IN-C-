// // // // // // // // // // // // // // // #include<stdio.h>
// // // // // // // // // // // // // // // int main(){
// // // // // // // // // // // // // // //     int n,prod,sum,a,last;
// // // // // // // // // // // // // // //     printf("enter the number ");
// // // // // // // // // // // // // // //     scanf("%d",&n);
// // // // // // // // // // // // // // //     sum=0;
// // // // // // // // // // // // // // //     a=n;
// // // // // // // // // // // // // // //     while(n>0){
// // // // // // // // // // // // // // //         last=n%10;
// // // // // // // // // // // // // // //         prod=1;
// // // // // // // // // // // // // // //         for(int i=1;i<=last;i++){
// // // // // // // // // // // // // // //             prod=prod*i;       
// // // // // // // // // // // // // // //         }
// // // // // // // // // // // // // // //         n=n/10;
// // // // // // // // // // // // // // //         sum=sum+prod;
// // // // // // // // // // // // // // //     }
// // // // // // // // // // // // // // //     if(a==sum){
// // // // // // // // // // // // // // //             printf("The number is a strong number\n");
// // // // // // // // // // // // // // //         } else {
// // // // // // // // // // // // // // //             printf("The number is not a strong number\n");
// // // // // // // // // // // // // // //         }
   
// // // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // // }
// // // // // // // // // // // // // // #include<stdio.h>
// // // // // // // // // // // // // // int main(){
// // // // // // // // // // // // // //     int n,sum,a,last,count,revnum=0;
// // // // // // // // // // // // // //     printf("enter the number");
// // // // // // // // // // // // // //     scanf("%d",&n);
// // // // // // // // // // // // // //     a=n;
// // // // // // // // // // // // // //     while(n>0){
// // // // // // // // // // // // // //         last=last%10;
// // // // // // // // // // // // // //         revnum=revnum*10+last;
// // // // // // // // // // // // // //         n=n/10;
// // // // // // // // // // // // // //     }
// // // // // // // // // // // // // //     if(a==revnum){
// // // // // // // // // // // // // //         printf("The number is a palindrome\n");         
// // // // // // // // // // // // // //     } else {
// // // // // // // // // // // // // //         printf("The number is not a palindrome\n");         

// // // // // // // // // // // // // //     }
// // // // // // // // // // // // // // }
// // // // // // // // // // // // // #include<stdio.h>
// // // // // // // // // // // // // int main(){
// // // // // // // // // // // // //     int row;
// // // // // // // // // // // // //     printf("enter the number of rows");
// // // // // // // // // // // // //     scanf("%d",&row);
// // // // // // // // // // // // //     for(int rows=1;rows<=row;rows++){
// // // // // // // // // // // // //         for(int column=1;column<=rows;column++){
// // // // // // // // // // // // //             printf("%d",column);

// // // // // // // // // // // // //         }
// // // // // // // // // // // // //         printf("\n");
 
// // // // // // // // // // // // //     }
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }
// // // // // // // // // // // // #include<stdio.h>
// // // // // // // // // // // // int main(){
// // // // // // // // // // // //     int n;
// // // // // // // // // // // //     printf("Enter the number of rows: ");
// // // // // // // // // // // //     scanf("%d",&n);
// // // // // // // // // // // //     // Printing the pattern
// // // // // // // // // // // //     for(int row=1;row<=n;row++){
// // // // // // // // // // // //         for( int column=1;column<=n-row;column++){
// // // // // // // // // // // //             printf("%d",column);

// // // // // // // // // // // //         }
// // // // // // // // // // // //         printf("\n");
// // // // // // // // // // // //     }
// // // // // // // // // // // // }
// // // // // // // // // // // #include<stdio.h>
// // // // // // // // // // // int main(){
// // // // // // // // // // //     for(int i=1;i<=5;i++){
// // // // // // // // // // //         for(int j=1;j<=5-i;j++){
// // // // // // // // // // //             printf(" ");
// // // // // // // // // // //             for(int k=1;k<=i;k++){
// // // // // // // // // // //             printf("*");
// // // // // // // // // // //         }   
// // // // // // // // // // //         }
// // // // // // // // // // //         printf("\n");
// // // // // // // // // // //     }
// // // // // // // // // // //     return 0;
// // // // // // // // // // // }
// // // // // // // // // // #include<stdio.h>
// // // // // // // // // // int main(){
// // // // // // // // // //     int n;
// // // // // // // // // //     printf("enteer the number of rows: ");
// // // // // // // // // //     scanf("%d",&n);
// // // // // // // // // //     // Printing the pattern

// // // // // // // // // //     for(int i=1;i<=n;i++){
// // // // // // // // // //         for(int j=1;j<=n-i;j++){
// // // // // // // // // //             printf(" ");
// // // // // // // // // //             }     
// // // // // // // // // //             for(int k=1;k<=2*i-1;k++){
// // // // // // // // // //                 printf("*");
// // // // // // // // // //         }
// // // // // // // // // //         printf("\n");
// // // // // // // // // //     }
// // // // // // // // // //     return 0;
// // // // // // // // // // }
// // // // // // // // // #include<stdio.h>
// // // // // // // // // int swap(int *a,int *b){
// // // // // // // // //     int temp;
// // // // // // // // //     temp=*a;        
// // // // // // // // //     *a=*b;
// // // // // // // // //     *b=temp;
// // // // // // // // // }   
// // // // // // // // // int main(){
// // // // // // // // //     int x,y;        
// // // // // // // // //     printf("enter the value of x: ");       
// // // // // // // // //     scanf("%d",&x); 
// // // // // // // // //     printf("enter the value of y: ");
// // // // // // // // //     scanf("%d",&y);

// // // // // // // // //     printf("Before swapping: x=%d, y=%d\n", x, y);
// // // // // // // // //     swap(&x, &y);
// // // // // // // // //     printf("After swapping: x=%d, y=%d\n", x, y);
// // // // // // // // //     return 0;
// // // // // // // // // }
// // // // // // // // #include<stdio.h>
// // // // // // // // int swap(int x, int y){
// // // // // // // //     int temp= x;
// // // // // // // //     x= y;
// // // // // // // //     y= temp;
// // // // // // // //     printf(" number are swapped %d %d",x,y);
// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // //     int a=10,b=20;
// // // // // // // //     printf("number before swapping are %d %d\n",a,b);
// // // // // // // //     swap(a,b);

// // // // // // // // }
// // // // // // // #include<stdio.h>
// // // // // // // int x=0;
// // // // // // // extern int x;
// // // // // // // void f(){
// // // // // // //     ++x;
// // // // // // //     printf("%d",x);
// // // // // // // }
// // // // // // // void f2(){
// // // // // // //     ++x;
// // // // // // //     printf("%d",x);
// // // // // // // }
// // // // // // // int main(){
// // // // // // //     f();
// // // // // // //     f2();
// // // // // // //     ++x;
// // // // // // //     printf("%d",x);
      
// // // // // // // }
// // // // // // #include<stdio.h>
// // // // // // void swap(int a, int b){
// // // // // //     int temp;
// // // // // //     temp=a;
// // // // // //     a=b;
// // // // // //     b=temp;
// // // // // // }
// // // // // // int main(){
// // // // // //     int x,y;
// // // // // //     printf("enter the nunmber");
// // // // // //     scanf("%d %d",&x,&y);
// // // // // //     swap();
// // // // // //     printf("swapped numbr are",x,y);
// // // // // //     return 0;
// // // // // // }
// // // // // #include<stdio.h>
// // // // // void binary(int n){
// // // // //     if(n==0 || n==1){
// // // // //         printf("%d",n);
// // // // //         return;
// // // // //     }
// // // // //     else{
// // // // //         binary(n/2);
// // // // //         printf("%d",n%2);
// // // // //     }
// // // // // }
// // // // // int main(){
// // // // // int n;
// // // // // printf("enter the number");
// // // // // scanf("%d",&n);
// // // // // binary(n);
// // // // // }
// // // // #include<stdio.h>
// // // // int power(int a,int b){
// // // //     if(b==1){
// // // //         return a;
// // // //     }
// // // //     else{
// // // //         return a*power(a,b-1);
// // // //     }
// // // // }
// // // // int main(){
// // // //     int n,b;
// // // //     printf("enter the number");
// // // //     scanf("%d %d",&n,&b);
// // // //     int result=power(n,b);
// // // //     printf("%d",result);
// // // // }
// // // #include<stdio.h>
// // // int digit(int n){
// // //     if(n<=9){
// // //         return 1;
// // //     }
// // //     else{
// // //         return 1+digit(n/10);
// // //     }
// // // }
// // // int main(){
// // //     int n;
// // //     printf("enter the numbre");
// // //     scanf("%d",&n);
// // //     int number=digit(n);
// // //     printf("%d",number);
// // //     return 0;

// // // }
// // #include<stdio.h>
// // void octal(int n){
// //     if(n<8){
// //         printf("%d",n);
// //     }
// //     else{
// //         octal(n/8);
// //         printf("%d",n%8);
// //     }
// // }
// // int main(){
// //     int n;
// //     printf("enter the number");
// //     scanf("%d",&n);
// //     octal(n);
// //     return 0;
// // }
// // tower of hanoi
// #include<stdio.h>
// void TOH(int n, char source,char destination ,char aux ){
//     if(n==1){
//         printf("%c - %c\n",source,destination);
//         return;
//     }
//     else{
//         TOH(n-1,source,aux,destination);
//         printf("%c-%c\n",source,destination);
//         TOH(n-1,aux,destination,source);
//     }
// }
// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     TOH(n,'A','C','B');
//     return 0;
// }
// fibbonacci series
#include<stdio.h>
int fibbo(int n){
    if(n==0)
    return 1;
if(n==1)
return 1;
else{
    return fibbo(n-1)+fibbo(n-2);
}
}
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("%d",fibbo(i));

    }
    return 0;
}