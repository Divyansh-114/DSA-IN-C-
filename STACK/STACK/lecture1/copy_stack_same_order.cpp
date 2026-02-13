#include<iostream>
#include<stack>
using namespace std;
void print_stack(stack<int>s){
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"this is the original stack"<<endl;
    print_stack(s);
    stack<int>s1;
        while(s.size()>0){
        s1.push(s.top());
        s.pop();
    }
    cout<<endl;
    
    stack<int>s2;
while(s1.size()>0){
    s2.push(s1.top());
    s1.pop();
}
cout<<"this is the copy stack in the same order as original stack"<<endl;
print_stack(s2);
}