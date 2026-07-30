#include<iostream>
#include<vector>
#include<unordered_Set>
using namespace std;

void permutation(string input,int idx){
    if(idx==input.size()-1){
        cout<<input<<endl;
        return;
    }
    unordered_set<char>s;
    for(int i =idx;i<input.size();i++){
        // First we will swap 
        // this is for duplicay check 
        if(s.find(input[i])!=s.end())
        continue;
        s.insert(input[i]);


        swap(input[idx],input[i]);
        permutation(input,idx+1);
        // backtrack 
        swap(input[idx],input[i]);
    }
}
int main(){

    permutation("ABB",0);
    return 0;
    
}
