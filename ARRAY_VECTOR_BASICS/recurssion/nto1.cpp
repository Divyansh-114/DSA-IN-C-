#include<iostream>
using namespace std;
int num(int n){
    if(n==0){
        return 0;
    }
    //  cout<<n<<endl;
    num(n-1);
      cout<<n<<endl;
}
int main(){
int n;
cout<<"Enter the number upto which you want to print"<<endl;
cin>>n;
num(n);
return 0;
}