class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> result(k, 0);
        vector<long long> prev(k, 0);

        for (int num : nums) {
            vector<long long> curr(k, 0);

            int rem = num % k;
            curr[rem]++;

            for (int r = 0; r < k; r++) {
                if (prev[r] == 0)
                    continue;

                int newRem = (long long)r * rem % k;
                curr[newRem] += prev[r];
            }

            for (int r = 0; r < k; r++) {
                result[r] += curr[r];
            }

            prev = move(curr);
        }

        return result;
    }
};