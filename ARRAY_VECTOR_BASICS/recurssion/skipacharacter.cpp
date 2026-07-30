#include<iostream>
#include<string>
using namespace std;
void removechar(string ans,string str,int idx){
char ch=str[idx];
if(idx==str.length()){
    cout<<ans;
    return;
}
if(ch=='a')
removechar(ans,str,idx+1);
else
removechar(ans+ch,str,idx+1);
}
int main(){
    string str ="physics wallha";
    removechar("",str,0);

}
