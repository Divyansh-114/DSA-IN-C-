#include<iostream>
using namespace std;
class bike{
    public:
    int tyre;
    int engine;
    // default constructor
    bike (int tyre ,int engine){
        this->tyre=tyre;
        this->engine=engine; // now the value is being going to set
    }
    ~bike(){
        cout<<"destruct all the memory ";
    }
  
};
int main(){
    bike tvs(12,13);
    cout<<tvs.tyre<<" "<<tvs.engine<<endl; 
    bool flag=true;
    if(flag==true){
        bike bmw(19,30);
        cout<<bmw.tyre<<" "<<bmw.engine<<endl;
    }
}