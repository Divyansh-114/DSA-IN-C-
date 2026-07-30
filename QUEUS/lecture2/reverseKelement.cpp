#include<iostream>
#include<stack>
#include<queue>
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
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int n=q.size();
    int k=3;
    // making the stack
    // stack<int>s;
    // int k=3;
    // for(int i=0;i<k;i++){
    //     s.push(q.front());
    //     q.pop();
    // }
    // now making the another queue
//     queue<int> p;
//    for(int i=0;i<k;i++){
//     p.push(s.top());
//     s.pop();
//    }
//    cout<<p.front();
   // now adding the remaning element in the this queue 
   // this is by using the extra queue
//    for(int i=0;i<n-k;i++){
//     p.push(q.front());
//     q.pop();
//    }
//   display(p);


// without any extra queue 
// while(s.size()!=0){
//     q.push(s.top());
//     s.pop();
// }
// cout<<q.back();
// for(int i=0;i<n-k;i++){
//     int x=q.front();
//     q.pop();
//     q.push(x);
// }
// cout<<q.back();
// 
// display(q);
// now i am the loop only till the k (n-k) elemnt and insert them in a stack t
// third method directly added the elment in the queue 
for(int i=0;i<=k+1;i++){
    int x=q.front();
    q.pop();
    q.push(x);
}
display(q);

    
}