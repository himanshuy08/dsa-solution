class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> od;
        vector<int> ev;

        od.push_back(nums[0]);
        ev.push_back(nums[1]);

        for (int i = 2; i < n; i++) {
            if (od.back() > ev.back()) {
                od.push_back(nums[i]);
            } else {
                ev.push_back(nums[i]);
            }
        }

        od.insert(od.end(), ev.begin(), ev.end());

        return od;
    }
};