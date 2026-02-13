#include<iostream>
using namespace std;

int main() {
    int P, C, M, E, CS;
    cout << "Enter the marks in Physics, Chemistry, Mathematics, English and Computer Science: ";
    cin >> P >> C >> M >> E >> CS;

    int total = P + C + M + E + CS;
    float percentage = (total / 500.0) * 100;  // Use float for accurate division

    cout << "PERCENTAGE IS: " << percentage << "%" << endl;

    if (percentage >= 91 && percentage <= 100) {
        cout << "Excellent";
    } else if (percentage >= 81 && percentage <= 90) {
        cout << "Very Good";
    } else if (percentage >= 71 && percentage <= 80) {
        cout << "Good";
    } else if (percentage >= 61 && percentage <= 70) {
        cout << "Average";
    } else if (percentage >= 51 && percentage <= 60) {
        cout << "Below Average";
    } else if (percentage >= 41 && percentage <= 50) {
        cout << "Poor";
    } else {
        cout << "Fail";
    }

    return 0;
}
