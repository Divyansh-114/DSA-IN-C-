#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
   vector<int> v = {0,1,-2,5,6,4,7,-8};
   int k=3;


    // now we adding  the element in the queue
    queue<int>q;
    for(int i=0;i<v.size();i++){
        if(v[i]<0)
        q.push(i);
    }
    // now our queue is ready for the first negative number 
    // now we apply the  logic for finding the first negative
    int i=0;
    int j=i+k;
    vector<int>ans;
    while(j<v.size()){
        while(q.size()>0 && q.front()<i)
        q.pop();
        if(q.size()==0 && q.front()>=j)
        ans.push_back(0);
        else
        ans.push_back(v[q.front()]);
        i++;
        j++;

    }
    // now printing the ans vector
    for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
}