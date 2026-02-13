#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    vector<int>q={100,80,60,70,60,75,105};
    int n=q.size();
    vector<int>ans(n);
    vector<int>temp;
    int count=1;
    ans[0]=1;
    s.push(0);
    // this is the brute force approach 
    // now doing the calcualtions
    // for(int i=1;i<n;i++){
    //     while(s.size()!=0 && q[i]>s.top()){
    //         count++;
    //         temp.push_back(s.top());
    //         s.pop();
    //     }
    //     ans[i]=count;
    //     count=1;
    //     while(temp.size()!=0){
    //         s.push(temp.back());
    //         temp.pop_back();
    //     }
    //     s.push(q[i]);
    // }
    // // now calculating the ans 
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    // thi is in O(n)

    for(int i=1;i<n;i++){
        while(s.size()!=0 && q[s.top()]<q[i])
        s.pop();

            if(s.empty()) {
        ans[i] = i + 1;      // no greater element on left
    } 
    else {
        ans[i] = i - s.top();
    }
    }

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}



}