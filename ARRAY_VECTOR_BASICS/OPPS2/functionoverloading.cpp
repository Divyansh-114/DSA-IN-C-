#include<iostream>
using namespace std;
void calculate_area(int a ,int b){
    cout<<"the area of triangle is "<<" "<< a*b;

}
void calculate_area(float r){
    cout<<"the area of cirle is"<<" "<<3.14*r*r;
}
int main(){
    calculate_area(10,20);
    calculate_area(3);
}