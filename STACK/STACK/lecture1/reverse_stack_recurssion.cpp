#include<iostream>
using namespace std;
#include<stack>
void reverse_stack(stack<int>&s){
    if(s.size()==0)
        return;
    int val=s.top();
    s.pop();
    reverse_stack(s);
    s.push(val);
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