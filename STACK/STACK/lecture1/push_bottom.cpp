#include<iostream>
using namespace std;
#include<stack>
int main(){
    // this is the original stack 
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    // here we made a copy of the original stack 
    stack<int>s1;
    while(s.size()>0){
        s1.push(s.top());
        s.pop();
    }
    // here we add the element in the origianl stack
    s.push(0);
    // here we add the all the previous element from that stack 
    while(s1.size()>0){
        s.push(s1.top());
        s1.pop();
    }
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }


}