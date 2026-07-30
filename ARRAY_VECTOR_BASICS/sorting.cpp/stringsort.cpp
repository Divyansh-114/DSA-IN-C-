#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s="DIVYANSH";
for(int i=0;i<s.length()-2;i++){
    bool flag=true;
    for(int j=0;j<s.length()-2-i;j++){
if(s[j]>s[j+1]){
    swap(s[j],s[j+1]);
    flag=false;
}
    }
    if(flag==true){
        break;
    }
}
cout<<s;
return 0;
}
