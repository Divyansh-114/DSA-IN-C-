#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    stack<int>s1;
    s.push(1);
     s.push(2);
      s.push(3);
       s.push(4);
       while(s.size()>0){
        cout<<s.top()<<" ";
        // here we are pushing the top into the another stack and pop from the original stack 
        s1.push(s.top());
        s.pop();
       }
       cout<<endl;
       // now we are storing tthe element form the original to another stack
         while(s1.size()>0){
         s.push(s1.top());
          s1.pop();
         }
         while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
}
}