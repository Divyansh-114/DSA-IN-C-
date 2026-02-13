#include<iostream>
#include<stack>
 using namespace std;
 int  push_at_index(stack<int>&s,int val,int index){
    stack<int>s1;
    int i=0;
    while(i<index && s.size()>0){
        s1.push(s.top());
        s.pop();
        i++;
    }
    s.push(val);
    while(s1.size()>0){
        s.push(s1.top());
        s1.pop();
    }
 }
 int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    int index=2;
    int val=10;
    push_at_index(s,val,index);
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }

 }