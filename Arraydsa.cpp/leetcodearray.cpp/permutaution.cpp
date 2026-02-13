#include<iostream>
#include<vector>
using namespace std;
void storesubset(string ans,string original,vector<string>&v,bool flag ){
  if(original==""){
    v.push_back(ans);
    return;
  }
  char ch=original[0];
  if(original.length()==1){// y tb hoga jb string ki length 1 k equal hogi
    if(flag==true){// y tb k liye ki left string print na krane ho
        storesubset(ans+ch,original.substr(1),v,idx+1,true);
    }
    storsubset(ans,original.substr(1),v,idx+1,true);
  }
  char dh=original[1];
    if(ch==dh){
        if(flag==true){
            storesubset(ans+dh,original.substr(1),v,idx+1,true);
        }
        storesubset(ans,original.substr(1),v,idx+1,true);
    }
}
int main(){
    vector<string>v;
    string original="aab";
    string ans="";
    storsubset(ans,original,v,true);
    for(int i=0;i<v.size(),i++){
        cout<<v[i];
        cout<<endl;
    }
        
}