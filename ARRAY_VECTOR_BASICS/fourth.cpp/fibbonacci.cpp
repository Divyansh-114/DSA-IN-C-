#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,sum=0;
    cout<<"enter the number of terms in the fibbonacci series: ";
    cin>>n;
    cout<<" and secomd term of the fibbonacci series is: "<<b<<endl;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",i);
    }
          

    cout<<"the fibbonacci series is:"<<b;
    return 0;
}