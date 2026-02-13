#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of string";
    cin>>n;
    char name[n];
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            name[i]='a';
        }
    }
    cout<<name;
}