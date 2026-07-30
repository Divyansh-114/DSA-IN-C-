#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x <<" ";
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int>q;
    // push pop form->top size 
    // empty 
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    int n=q.size();
    // cout<<q.front() <<;
    // cout<<q.back();
    // cout<<q.size();
    // q.pop();
    // cout<<q.front();
    // cout<<q.size();
    // display(q);
    // q.pop();
    // display(q);
    stack<int>s;
    for(int i=0;i<n;i++){
        s.push(q.front());
        q.pop();
    }
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
}