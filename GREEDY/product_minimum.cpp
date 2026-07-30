#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={-2,-3,-4,-5,1,5,6,7};
    int positive=1;
    int negative=1;
    int flag=false;
    int nn=0;
    int np=0;
    int ans=1;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            nn++;
        }
        else if(arr[i]==0)
        flag =true;
        else{
            np++;         
        }
    }
    if(flag==true)
    cout<<"ANS IS 0";
    else{
        if(nn % 2 != 0){
            for(int i=0;i<arr.size();i++){
                ans *= arr[i];              
            }          
        }
        else{
            min_element(arr.begin(),arr.end());
        }

    }


    }

