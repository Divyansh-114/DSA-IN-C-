#include<iostream>
#include<climits>
using namespace std;
// this is brute force approach 
int main(){
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = 9;
    int k =4 ;
    // brute force approach
//     int max[9] = {0}; // Initialize all elements to 0

//     for(int i = 0; i <= n - k; i++){
//         int maxi = 0;
//         for(int j = i; j < i + k; j++){ // Corrected: increment j, not i
//             maxi += arr[j];
//         }
//         max[i] = maxi;
//     }

//     for(int i = 0; i <= n - k; i++){ // Only print valid sums
//         cout << max[i] << " ";
//     }
//     cout<<endl;
//   int maxu=INT_MIN;
//   int idx=0;
//   for(int i=0;i<n;i++){
//     if(max[i] > maxu){
//         maxu=max[i];
//         idx=i;
//     }
//   }
//   cout<<maxu<<endl;
//   cout<<idx+1;

// sliding window
int maxsum=INT_MIN;
int previoussum=0;
for(int i=0;i<k;i++){
    previoussum+=arr[i];
}
maxsum=previoussum;
int i=1;
int j=k;
while(j<n){
    int newsum=previoussum+arr[j]-arr[i-1];
    if(newsum>maxsum){
        maxsum=newsum;
    }
    i++;
    j++;
    previoussum =newsum;
}
cout<<maxsum;
    return 0;
}
