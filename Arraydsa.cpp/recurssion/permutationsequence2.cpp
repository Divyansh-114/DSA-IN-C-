#include<iostream>
#include<string>
using namespace std;
string permutation(string original,string ans,int k){
    int n=original.length();
    if(n==1){
        ans+=original;
        return ans;
    }
    // hmare pss k=4 hai hme ans =231
    int fact=1;
    for(int i=2;i<n;i++){
        fact*=i;
    }
    // here we are calculating the index by original string
    int idx=k/fact;
    if(k%fact==0)
    idx--;
// now finding thr character
    char ch=original[idx];
    // calculating the new string
    string left=original.substr(0,idx);
    string right=original.substr(idx+1);
    // now finding the last parameter
    int q=1;
    // agr jitne factoril hai vo pure divide ho gyr iska mtlb vo no last element hai
    if(k%fact==0)
    q=fact;
else
q=k%fact;
return permutation(left+right,ans,q);

}
int main(){
    int n=4;
    string original="";
    for(int i=1;i<=n;i++){
        original+=to_string(i);// y string m 1234 append kr dega 
    }
int k=4;// y vo combination niaklne k liye 
string result=permutation(original,"",k);
cout<<result;
return 0;
}+