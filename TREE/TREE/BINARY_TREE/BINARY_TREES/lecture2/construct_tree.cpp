#include<iostream>
#include<climits>
#include<queue>
using namespace std;
// this is Tree class 
class Node{
    public:
    int val;
    Node* left;
    Node* Right;
    // this is our constructor
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->Right=NULL;
    }    
};



void level_queue(Node* root){
    queue<Node*> q;

    q.push(root);
    cout<<"THIS IS LEVEL ORDER TRAVERSAL";
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left !=NULL)
        q.push(temp->left);
        if(temp->Right!=NULL)
        q.push(temp->Right);
    }
}
void level_queue_REVERSE(Node* root){
    queue<Node*> q;
    q.push(root);
    cout<<"THIS IS LEVEL ORDER TRAVERSAL";
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->Right!=NULL)
        q.push(temp->Right);
        if(temp->left !=NULL)
        q.push(temp->left);
        
    }
}
Node* construct(int arr[],int n){
    // first we pass the root of the tree to queue 
    queue<Node*> q;
    Node* root= new Node(arr[0]);
    q.push(root);
    // these are the two pointer which traverse thourgh whole array
    int i=1;
    int j=2;
    // in this loop we make a connection
    while(q.size()>0 && i<n){
        // tempearay node 
        Node* temp=q.front();
        q.pop();
        // mking of the two new nodes 
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN)
        l=new Node(arr[i]);
        else
        l=NULL;

        if(j!=n && arr[j]!=INT_MIN)
        r=new Node(arr[j]);
        else
        r=NULL;
        // making the connection 

        temp->left=l;
        temp->Right=r;
        if(l!=NULL)
        q.push(l);
        if(r!=NULL)
        q.push(r);
        // always increment by the 2 
        i+=2;
        j+=2;




    }
    return root;
}

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root= construct(arr,n);
    level_queue(root);
    
}