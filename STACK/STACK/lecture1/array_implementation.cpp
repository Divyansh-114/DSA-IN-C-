#include<iostream>
using namespace std;
class stack
{
    public:
    int arr[5];
    int idx=-1;
    void push(int val){
        if(idx==4){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
            idx++;
            arr[idx]=val;
        }

    }
     void pop(){
        if(idx==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        else{
            idx--;
        }
     }
     int top(){
        if(idx==-1){
            cout<<"stack is empty";
            return 0;
        }
        else
        return arr[idx];
     }
     void print(int arr[],int size){
        for(int i=size-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
     }
};
int main(){
stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.print(s.arr,s.idx+1);

}