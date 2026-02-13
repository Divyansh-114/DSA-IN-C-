#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
float max(float a,float b){
    if(a>=b)
    return a;
else
return b;
}
float min(float a,float b){
    if(a<b)
    return a;
else
return b;
}
int main(){
    int arr[]={4,6,9};
    int n=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmini=(float)(INT_MIN);
    float kmaxx=(float)(INT_MAX);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            kmini=max(kmini,((arr[i]+arr[i+1])/2.0));
        }
        else{
            kmaxx=min(kmaxx,((arr[i]+arr[i+1])/2.0));
        }
        if(kmini>kmaxx){
            flag=false;
            break;
        }

    }
    if(flag==false){
        cout<<-1;
    }
    cout<<kmini<<" "<<kmaxx;
}