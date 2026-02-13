#include<iostream>
using namespace std;
int partition(int arr[],int si,int en){
    int pivot=arr[si];
    int count=0;
    int pivotidx=-1;
    for(int i=si;i<=en;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);
    int i=si;
    int j=en;
    while(i<pivotidx || j>pivotidx){
        if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(pivot>arr[i]){
            i++;
        }
        else if(pivot<arr[j]){
            j--;
        }
    }
    return pivotidx;

}
void quicksort(int arr[],int si,int en){
    if(si>=en)
    return;
    int pivot=partition(arr,si,en);
    quicksort(arr,si,pivot-1);
    quicksort(arr,pivot+1,en);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the unsorted array is"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    cout<<"the sorted array is"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}