#include<iostream>
using namespace std;

void find(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    // Find rightmost set bit
    int temp = result;
    int k = 0;
    while ((temp & 1) == 0) {
        k++;
        temp >>= 1;
    }

    // Divide into two groups and XOR
    int num1 = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] >> k) & 1)
            num1 ^= arr[i];
    }

    int num2 = result ^ num1;

    cout << "The two unique numbers are: " << num1 << " and " << num2 << endl;
}

int main() {
    int arr[] = {1, 2, 1, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    find(arr, n);
}
    