#include<iostream>
#include<stack>
#include<sstream>
using namespace std;

int solve(int val1, char ch, int val2) {
    if (ch == '+') return val1 + val2;
    if (ch == '-') return val1 - val2;
    if (ch == '*') return val1 * val2;
    if (ch == '/') return val1 / val2;
    return 0;
}

int main(){
    string str = "2 6 4 * 8 / + 35 -";
    stack<int> s;

    stringstream ss(str);
    string token;

    while (ss >> token) {
        // If number
        if (isdigit(token[0])) {
            s.push(stoi(token));
        } 
        else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();
            s.push(solve(val1, token[0], val2));
        }
    }

    cout << s.top();
}
