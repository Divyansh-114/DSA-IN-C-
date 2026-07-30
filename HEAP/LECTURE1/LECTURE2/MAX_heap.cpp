#include<iostream>
using namespace std;
class Minheap{
    public:
    int idx;
    int arr[50];
    // constructor
    Minheap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int ele){
        arr[idx]=ele;
        int i=idx;
        idx++;
        // swapping i become one
        while(i!=1){
            if(arr[i/2]>arr[i])
            swap(arr[i/2],arr[i]);
            else
            break;
            i=i/2;
        }
        
    }
    void pop(){
        idx--;
        int i=idx;
        arr[1]=arr[i];
       
        while(true){
            
        int l =2*i;
        int r=2*i+1;
         if(l>idx-1)
         break;
         if(r>idx-1){
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
    int size(){
        return idx-1;
    }

};

int main(){
    Minheap pq ;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(4);
   cout<<pq.size();
    cout<<endl;
  cout << pq.top();
    pq.pop();
    pq.pop();
    cout<<endl;
    cout<<pq.top();


}
