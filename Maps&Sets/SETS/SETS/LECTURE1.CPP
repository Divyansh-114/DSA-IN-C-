#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main(){
    set<int>s;
           s.insert(3);
           s.insert(1);
           s.insert(2);
           s.insert(4);
        cout<<s.size()<<" ";
     int target =4;
     if(s.find(target)!=s.end()){// target exisits  
        cout<<"exists";
     }
     else{
        cout<<"does not";
     }
    // for each loop

    for(int x:s){
        cout<<x<<" ";
    } 

    return 0;

} 