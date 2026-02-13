#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"enter the number";
    cin>>a>>b>>c;
    pattern(a);
    pattern(b);
    pattern(c);

    return 0;
}