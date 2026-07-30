#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x <<" ";
        q.pop();
    }
}
int main(){
    queue<int>q;
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0)
        q.pop();
        else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
    display(q);
}