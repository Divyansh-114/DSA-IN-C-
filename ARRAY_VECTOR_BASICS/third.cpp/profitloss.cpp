#include<iostream>
using namespace std;
int main(){
    int CP,SP;
    cout<<" enter the values of CP and SP";
    cin>>CP>>SP;
    if(SP>CP){
        int profit=SP-CP;
        cout<<"the profit is got";
        cout<<profit;
    }
    else if(SP==CP){
        cout<<"neither profit nor loss";
    }
    else{
        int loss=CP-SP;
        cout<<"loss is done";
        cin>>loss;
    }
}