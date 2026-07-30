#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){// base case
        return 1;
    }
    // recursive case
    return n*factorial(n-1);
}
int main(){ 
int n;
cout<<"Enter the number to find its factorial"<<endl;   
cin>>n;
cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;   
return 0;
}