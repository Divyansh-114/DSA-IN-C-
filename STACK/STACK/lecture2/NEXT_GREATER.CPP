#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int> a={4,2,8,7,9,6,3,4,5,3,5,8,7,5,6,1,2};
    int n=a.size();
    vector<int>ans(n);
    stack<int>s;
    // for the next greatest always travel from the back 
    // last element will always be -1 because the last next greated is always is -1
    ans[n-1]=-1;
    // now putting that last element into the stack
    s.push(a[n-1]);
    // now from the second last element we go through each element and find out its next greated 
    for(int i=n-2;i>=0;i--){
        while(s.size()!=0 && s.top()<=a[i])
        s.pop();
        if(s.size()==0)
        ans[i]=-1;
        else
        ans[i]=s.top();
        s.push(a[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}
