class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentMax = nums[0];
        int currentMin = nums[0];
        int answer = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];

            if (x < 0) {
                swap(currentMax, currentMin);
            }

            currentMax = max(x, currentMax * x);
            currentMin = min(x, currentMin * x);

            answer = max(answer, currentMax);
        }

        return answer;
    }
};