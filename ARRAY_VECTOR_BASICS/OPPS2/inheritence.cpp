#include<iostream>
using namespace std;
class vechile{
    public:
    int handle;
    int tyre;
};
class bike: public vechile{
        public:
        string name;

};
int main(){
    bike honda;
    string bike=honda.name ="hero honda";
    int size=honda.tyre=34;
    cout<<bike<<" "<<size;
}