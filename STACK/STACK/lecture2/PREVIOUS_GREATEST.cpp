#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {3, 1, 2, 5, 4, 6, 2, 3};
    int n = a.size();

    vector<int> ans(n);
    stack<int> s;

    s.push(a[0]);
    ans[0] = -1;

    // traverse from left to right
    for (int i = 1; i < n; i++) {
        while (!s.empty() && s.top() <= a[i]) {
            s.pop();
        }

        if (s.empty())
            ans[i] = -1;
        else
            ans[i] = s.top();

        s.push(a[i]);
    } 

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}
