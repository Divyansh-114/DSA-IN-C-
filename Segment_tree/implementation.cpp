#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> segTree;


void buildTree(int arr[],int start,int end,int node){

    // base case 
    if(start == end){
        segTree[node] = arr[start];
        return;
    }
    // recursively build the segment tree
    int mid = start + (end - start) / 2;


    buildTree(arr, start, mid, 2*node + 1); // left tree
    buildTree(arr, mid + 1, end, 2*node + 2);// right tree

    // store the maximum of values in this segment
    segTree[node] = max(segTree[2*node + 1] , segTree[2*node + 2]);
}

int getmin(int start,int end,int l,int r,int node){
    // completely outside the range
    if(start > r || end < l){
        return INT_MAX;
    }
    // completely inside the range
    if(start >= l && end <= r){
        return segTree[node];
    }
    // partially inside and partially outside
    int mid = start + (end - start) / 2;

    int left = getmin(start, mid, l, r, 2*node + 1);
    int right = getmin(mid + 1, end, l, r, 2*node + 2);

    return min(left,right);
}
int get_max(int start,int end,int l,int r,int node){
    // completely outside the range
    if(start > r || end < l){
        return INT_MIN;
    }
    // completely inside the range
    if(start >= l && end <= r){
        return segTree[node];
    }
    // partially inside and partially outside
    int mid = start + (end - start) / 2;

    int left = get_max(start, mid, l, r, 2*node + 1);
    int right = get_max(mid + 1, end, l, r, 2*node + 2);

    return max(left,right);
}



int main(){
    int arr[] = {0,1,2,3,4,5,6,7,};
    int n = sizeof(arr)/sizeof(arr[0]);
    segTree.resize(4*n);
    buildTree(arr, 0, n-1, 0);

    // now test the segment tree
    int l = 1, r = 5;
    cout << "Minimum value in range [" << l << ", " << r << "] is: " << getmin(0, n-1, l, r, 0) << endl; 
    cout << "Maximum value in range [" << l << ", " << r << "] is: " << get_max(0, n-1, l, r, 0) << endl;          
} 