#include<iostream>
using namespace std;
int decimal(string s){
    int n=s.length();
    int ans=0;
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        // y isliye kiya taki 0 ya 1 he jae or kuch na jae 
        int num=ch-'0';
        ans+=num*(1<<n-i-1);
    }
    return ans;
}
int main(){
    string s="111";
    cout<<decimal(s)<<endl;
}