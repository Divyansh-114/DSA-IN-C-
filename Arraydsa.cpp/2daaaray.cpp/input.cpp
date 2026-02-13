// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int m, n;
//     cout << "Enter the number of rows: ";
//     cin >> m;
//     cout << "Enter the number of columns: ";
//     cin >> n;

//     vector<vector<int>> arr(m, vector<int>(n));

//     cout << "Fill the entries in the array:\n";
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "The array is:\n";
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
int arr[m][n];

    cout << "Fill the entries in the array:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The array is:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

