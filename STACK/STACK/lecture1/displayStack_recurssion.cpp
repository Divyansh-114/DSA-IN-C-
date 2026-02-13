#include<iostream>
using namespace std;
#include<stack>
void push_at_bottom(stack<int>&s,int val){
    if(s.size()==0){
        s.push(val);
        return;
    }
    int top=s.top();
    s.pop();
    push_at_bottom(s,val);
    s.push(top);
}
void reverse_stack(stack<int>&s){
    if(s.size()==0)
        return;
    int val=s.top();
    s.pop();
    reverse_stack(s);
    push_at_bottom(s,val);
}
int main(){
    stack<int>s;
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);
    reverse_stack(s);
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
}