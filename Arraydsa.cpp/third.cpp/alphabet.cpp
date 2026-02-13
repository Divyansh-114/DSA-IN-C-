#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character:";
    cin>>ch;
if((ch>=97 && ch<=122) || ch>=65 && ch<=90){
    cout<<"it is an alphabet"<<" "<<ch;
}
else{
    cout<<"it is not an alphabet"<<" "<<ch;
}
}
    
    