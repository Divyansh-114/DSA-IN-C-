#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number: ";
    cin>>n;
    
    // Counting the number of digits
    while(n>0){
        int last=n%10;
        sum=last+sum;
        n=n/10;
        
        
    }
    cout<<"the number od digit are"<<sum;

}