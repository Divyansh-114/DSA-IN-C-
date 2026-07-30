#include<iostream>
using namespace std;

void heapify(int i,int arr[],int n){
 
     while(true){
            
        int l =2*i+1;
        int r=2*i+2;
         if(l>=n)
         break;
         if(r>=n-1){
            if(arr[i]>arr[l]){
                swap(arr[i],arr[l]);
                i=l;
            }
            break;

         }
         // rearrangement 
        if(arr[l]<arr[r] && arr[i]>arr[l]){
            swap(arr[l],arr[i]);
            i=l;
        }
        else{
             if(arr[i]>arr[r])
            { swap(arr[i],arr[r]);
            i=r;}
           
        }
        }

}

int main(){
int arr []={10,2,14,11,1,4};
int n= sizeof(arr)/sizeof(arr[0]);
for(int i =n/2-1;i>=0;i--){
    heapify(i,arr,n);

}
for(auto x : arr ){
    cout<<x<<" ";
}


}
