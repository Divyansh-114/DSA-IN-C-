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
    if(flag==true)// y tb k liye ki left string print na krane ho
    storesubset(ans+ch,original.substr(1),v,true);
    storesubset(ans,original.substr(1),v,true);
    return;
  }
  char dh=original[1];
     if(ch==dh){// checking the duplicate 
        if(flag==true)
        storesubset(ans+ch,original.substr(1),v,true);
        storesubset(ans,original.substr(1),v,false);
     }
    else{
        if(flag==true)
        storesubset(ans+ch,original.substr(1),v,true);
        storesubset(ans,original.substr(1),v,true);
        }
    }


int main(){
    vector<string>v;
    string original="aab";
    string ans="";
    storesubset(ans,original,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        cout<<endl;
    }
        
}