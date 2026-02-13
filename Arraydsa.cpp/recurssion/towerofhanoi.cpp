#include<iostream>
using namespace std;
void TOH(int n,char S,char H,char D){
    if(n==0){
        return;
    }
    TOH(n-1,S,D,H);
    cout<<S<<" to "<<D<<endl;
  TOH(n-1,H,S,D);
}
int main(){
    int n;
    cin>>n;
    TOH(n,'S','H','D');
    return 0;
}