#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Item {
    float weight, profit;
};

bool cmp(Item a, Item b) {
    return (a.profit / a.weight) > (b.profit / b.weight);
}

int main() {
    vector<Item> items = {
        {10, 100},
        {20, 120},
        {30, 140},
        {5,500}
    };

    int bagpack = 50;
    float maxi = 0;

    // sort by profit/weight ratio (descending)
    sort(items.begin(), items.end(), cmp);

    for (int i = 0; i < items.size(); i++) {
        if (bagpack >= items[i].weight) {
            maxi += items[i].profit;
            bagpack -= items[i].weight;
        } else {
            maxi += (items[i].profit / items[i].weight) * bagpack;
            break; // VERY IMPORTANT
        }
    }

    cout << "Maximum profit: " << maxi;
}