class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        unordered_set<int> s;
        int sum = 0, ans = 0, left = 0;

        for (int right = 0; right < nums.size(); right++) {
            while (s.count(nums[right])) {
                sum -= nums[left];
                s.erase(nums[left++]);
            }

            s.insert(nums[right]);
            sum += nums[right];

            if (right - left + 1 > k) {
                sum -= nums[left];
                s.erase(nums[left++]);
            }

            if (right - left + 1 == k)
                ans = max(ans, sum);
        }

        return ans;
    }
};