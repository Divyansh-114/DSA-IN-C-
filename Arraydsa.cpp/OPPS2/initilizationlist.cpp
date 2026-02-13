#include<iostream>
using namespace std;
class student{
    public:
    int mark;
    int roll;

    student(int rolno,int marks):mark(marks),roll(rolno) {}     
};
int main(){
    student divyansh(18,89);
    cout<<divyansh.roll <<" "<<divyansh.mark;

}
