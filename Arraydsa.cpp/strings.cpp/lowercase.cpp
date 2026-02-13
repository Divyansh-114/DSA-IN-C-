#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  string s="cooder";
vector<int>v(26,0);
for(int i=0;i<s.length();i++){
    char ch=s[i];
    int ascii=(int)ch;
    v[ascii-'a']++;
}
int max=0;
for(int i=0;i<26;i++){
  if(v[i]>max){
    max=v[i];
  }

}
for(int i=0;i<26;i++){
  if(v[i]==max){
    int ascii=i+'a';
    char ch=(char)ascii;
    cout<<ch<<" "<<max;
  }
}

}