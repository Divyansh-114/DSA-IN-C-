#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int>prices={8,4,6,2,3};
    int n=prices.size();
        // here we implemented the stack 
        stack<int>s;
        vector<int>NSE(n);
        // here we are assgning the value 
        NSE[n-1]=-1;
        s.push(prices[n-1]);
            // heere we have calcualted the next smallest element
              for(int i=n-2;i>=0;i--){
        while(s.size()!=0 && s.top()>prices[i])
        s.pop();
        if(s.size()==0)
        NSE[i]=-1;
        else
        NSE[i]=s.top();

        s.push(prices[i]);
    }
        vector<int>dis;

           for(int i=0;i<n;i++){
                     if(NSE[i] != -1)
             dis.push_back(prices[i] - NSE[i]);
            else
        dis.push_back(prices[i]);
}

return 0;

}