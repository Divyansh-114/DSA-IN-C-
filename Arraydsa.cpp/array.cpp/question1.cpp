#include<iostream>
using namespace std;
int main(){
int marks[6];
for(int i=0;i<=5;i++){
    cin>>marks[i];
}
for(int i=0;i<=5;i++){
    if(marks[i]<=35){
        cout<<"rolls number are "<<i<<endl;
        cout<<"marks are "<<marks[i];
    }
}
    return 0;
}