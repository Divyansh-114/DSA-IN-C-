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
    string s = "2+6*4/8-3";
    stack<int> val;
    stack<char> op; // Changed to char for clarity

    for (int i = 0; i < s.length(); i++) {
        // 1. If digit, push to val stack
        if (s[i] >= '0' && s[i] <= '9') {
            val.push(s[i] - '0');
        } 
        // 2. If operator
        else {
            while (!op.empty() && priority(op.top()) >= priority(s[i])) {
                char ch = op.top();
                op.pop();
                
                int val2 = val.top(); // Pop val2 first
                val.pop();
                int val1 = val.top(); // Pop val1 second
                val.pop();
                
                val.push(solve(val1, ch, val2));
            }
            op.push(s[i]);
        }
    }

    // 3. Process remaining operators
    while (!op.empty()) {
        char ch = op.top();
        op.pop();
        
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        
        val.push(solve(val1, ch, val2));
    }

    cout << "Result: " << val.top() << endl; // Should output 2
    return 0;
} 