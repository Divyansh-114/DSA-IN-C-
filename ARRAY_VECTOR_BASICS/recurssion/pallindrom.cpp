#include<iostream>
using namespace std;
bool pallindrom(string original,int i,int j){
    if(i<j)
    return true;
if(original[i]!=original[j])
return false;
else
return pallindrom(original,i+1,j+1);
}
int main(){
    string s="DAD";
    cout<<pallindrom(s,0,s.length()-1);
}