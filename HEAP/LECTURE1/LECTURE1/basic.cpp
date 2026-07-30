#include<iostream>
#include<queue>
using namespace std;
int main(){
    // THIS IS THE MAX HEAP
    priority_queue<int>p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
while(p.size()>0){
    cout<<p.top()<<" ";
    p.pop();
}  
cout<<endl;
// THIS IS THE MIN HEAP
priority_queue<int,vector<int>,greater<int>>p;
 p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    while(p.size()>0){
    cout<<p.top()<<" ";
    p.pop();
} 


return 0;
}