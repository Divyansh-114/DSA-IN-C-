class Solution {
public:
    priority_queue<int> left; // max heap
    priority_queue<int, vector<int>, greater<int>> right; // min heap
    unordered_map<int, int> mp;
    int lSize = 0, rSize = 0;

    void balance() {
        if (lSize > rSize) {
            right.push(left.top());
            left.pop();
            lSize--; rSize++;
        }
        else if (rSize > lSize + 1) {
            left.push(right.top());
            right.pop();
            rSize--; lSize++;
        }
    }

    void remove(priority_queue<int>& heap) {
        while (!heap.empty() && mp[heap.top()]) {
            mp[heap.top()]--;
            heap.pop();
        }
    }

    double getMedian(int k) {
        if (k % 2) return right.top();
        return (left.top() + right.top()) / 2.0;
    }

    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> res;

        for (int i = 0; i < nums.size(); i++) {

            if (right.empty() || nums[i] >= right.top()) {
                right.push(nums[i]);
                rSize++;
            } else {
                left.push(nums[i]);
                lSize++;
            }

            balance();

            if (i >= k) {
                int out = nums[i - k];
                mp[out]++;

                if (out >= right.top()) rSize--;
                else lSize--;

                remove(left);
                remove(right);
                balance();
            }

            if (i >= k - 1) {
                remove(left);
                remove(right);
                res.push_back(getMedian(k));
            }
        }

        return res;
    }
};