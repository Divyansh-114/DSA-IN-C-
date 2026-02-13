#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    stack<int>s1;
        while(s.size()>0){
        s1.push(s.top());
        s.pop();
    }
    while(s1.size()>0){
        cout<<s1.top()<<" ";
        s1.pop();
    }


}