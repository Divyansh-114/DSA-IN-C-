#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    int n=q.size();
    // vector<int>ans;
    // for(int i=0;i<n/2;i++){
    //     ans.push_back(q.front());
    //     q.pop();
    // }
    // for(int i=0;i<ans.size();i++){
    //     q.push(ans[i]);
    //     q.push(q.front());
    //     q.pop();
    // }
    // for(int i=0;i<n;i++){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    //NOW BY STACK ONLY

    stack<int>s;
    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }
    // push them back into the queue
    while(s.size()>0){
        q.push(s.top());
        s.pop();
    }
    // now again half half queue m daalo
     for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }
    // now alternate queue m push kro 
    for(int i=0;i<n/2;i++){
        q.push(s.top());
        q.push(q.front());
        q.pop();
        s.pop();
    }
    for(int i=0;i<n;i++){
        s.push(q.front());
        q.pop();
    }
    while(s.size()>0){
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }



}
   