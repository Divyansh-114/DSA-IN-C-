#include<iostream>
#include<vector>
using namespace std;

int comb(vector<int>& dice, int target, vector<int>& dp) {
    if (target == 0)
        return 1;

    if (dp[target] != -1)
        return dp[target];

    int ans = 0;

    for (int i = 0; i < dice.size(); i++) {
        if (target - dice[i] >= 0) {
            ans += comb(dice, target - dice[i], dp);
        }
    }

    return dp[target] = ans;
}

int main() {
    vector<int> dice = {1,2,3,4,5,6};
    int target;
    
    cout << "enter the number ";
    cin >> target;

    vector<int> dp(target + 1, -1);

    int ans = comb(dice, target, dp);
    cout << ans;
}