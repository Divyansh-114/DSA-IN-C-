#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char ch) {
    if (ch == '-' || ch == '+') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}

int solve(int val1, char ch, int val2) {
    if (ch == '+') return val1 + val2;
    if (ch == '-') return val1 - val2;
    if (ch == '*') return val1 * val2;
    if (ch == '/') return val1 / val2;
    return 0;
}

int main() {
    string s = "(2+6)*4/8-3"; // Example with parentheses
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {
        // 1. If digit
        if (s[i] >= '0' && s[i] <= '9') {
            val.push(s[i] - '0');
        } 
        // 2. If opening bracket
        else if (s[i] == '(') {
            op.push(s[i]);
        }
        // 3. If closing bracket
        else if (s[i] == ')') {
            while (op.top() != '(') {
                char ch = op.top(); op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                val.push(solve(val1, ch, val2));
            }
            op.pop(); // Remove the '('
        }
        // 4. If operator
        else {
            while (!op.empty() && op.top() != '(' && priority(op.top()) >= priority(s[i])) {
                char ch = op.top(); op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                val.push(solve(val1, ch, val2));
            }
            op.push(s[i]);
        }
    }

    // 5. Final Clearing
    while (!op.empty()) {
        char ch = op.top(); op.pop();
        int val2 = val.top(); val.pop();
        int val1 = val.top(); val.pop();
        val.push(solve(val1, ch, val2));
    }

    cout << "Result: " << val.top() << endl; 
    return 0;
}