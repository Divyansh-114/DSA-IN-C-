#include<iostream>
#include<vector>
using namespace std;
int front=-1;
int rear=-1;
int Push(vector<int>&v,int val){
    if(v.size()==0){
        v.push_back(val);
        front=0;
        rear=0;
    }
    else{
        v.push_back(val);
        rear++;
    }
}
    void pop(){
        if(v.size()==0)
        cout<<"UNDERFLOW CONDITION";
        else{
            rear++;
        }
    }
    void display(vector<int> &v){
    int n=v.size();
    for(int i=front;i<=rear;i++){
     cout<<v[i];
    }
}
int main(){
    vector<int>v;
    push(10); 
}
 