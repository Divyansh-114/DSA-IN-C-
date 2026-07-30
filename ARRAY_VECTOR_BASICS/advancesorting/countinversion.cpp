#include <iostream>
#include <vector>
using namespace std;
int count=0;
int inversion(vector<int>& a, vector<int>& b){
    int i=0;
    int j=0;
    int count=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}


void merge(vector<int>& a, vector<int>& b, vector<int>& result) {
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    while (i < n) {
        result[k++] = a[i++];
    }

    while (j < m) {
        result[k++] = b[j++];
    }
}

void mergesort(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;

    int n1 = n / 2;
    int n2 = n - n1;
    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++) a[i] = arr[i];
    for (int i = 0; i < n2; i++) b[i] = arr[i + n1];

    mergesort(a);
    mergesort(b);
    // count the inversion
    count+=inversion(a,b);

    merge(a, b, arr);
    a.clear();
    b.clear();
}

int main() {
    int raw[] = {5,1,8,2,3};
    int n = sizeof(raw) / sizeof(raw[0]);
    vector<int> vec(raw, raw + n);

    cout << "Original array: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    mergesort(vec);

    cout << "\nSorted array: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout<<endl;
    cout<<"the number of inversion are"<<count;

    return 0;
}
