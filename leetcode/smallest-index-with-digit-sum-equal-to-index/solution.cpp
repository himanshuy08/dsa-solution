class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int minIndex = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }
        }

        return minIndex;
    }
};