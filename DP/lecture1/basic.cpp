#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int countSteps(int n,vector<int>&dp) {
    if (n == 1)
        return 0;

        if(dp[n]!=-1)
        return dp[n];

    int steps1 = countSteps(n - 1,dp);
    int steps2 = INT_MAX;
    int steps3 = INT_MAX;

    if (n % 2 == 0)
        steps2 = countSteps(n / 2,dp);

    if (n % 3 == 0)
        steps3 = countSteps(n / 3,dp);

    return dp[n]= 1 + min(steps1, min(steps2, steps3));
}

int main() {
    int n = 15;
     vector<int>dp(n+1,-1);
    cout << countSteps(n,dp);
}