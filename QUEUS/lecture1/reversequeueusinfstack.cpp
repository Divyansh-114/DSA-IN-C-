#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// this is a display function 
void display(queue<int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x <<" ";
        q.pop();
        q.push(x);
    }
}
// this is reverse queue
    void reverse(queue<int> &q){
        stack<int> s;
        int n=q.size();
        for(int i=0;i<n;i++){
            s.push(q.front());
            q.pop();
        }
        while(s.size()>0){
            q.push(s.top());
            s.pop();
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
    // cout<<q.front() <<;
    // cout<<q.back();
    // cout<<q.size();
    // q.pop();
    // cout<<q.front();
    // cout<<q.size();
    // these are display 
    // here we first reverse the queue 
    reverse(q);
    display(q);
    cout<<endl;
    // then we again make the queue int the same order 
    reverse(q);
    display(q);

} 