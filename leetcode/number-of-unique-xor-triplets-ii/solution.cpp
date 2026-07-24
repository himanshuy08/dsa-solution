class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAX = 2048;

        vector<vector<bool>> dp(4, vector<bool>(MAX, false));
        dp[0][0] = true;

        for (int x : nums) {
            for (int cnt = 2; cnt >= 0; cnt--) {
                for (int xr = 0; xr < MAX; xr++) {
                    if (dp[cnt][xr]) {
                        dp[cnt + 1][xr ^ x] = true;
                    }
                }
            }
        }

        vector<bool> vis(MAX, false);

        // x ^ x ^ x = x
        for (int x : nums) {
            vis[x] = true;
        }

        // XOR of 3 distinct elements
        for (int xr = 0; xr < MAX; xr++) {
            if (dp[3][xr]) {
                vis[xr] = true;
            }
        }

        int ans = 0;
        for (bool x : vis) {
            if (x) ans++;
        }

        return ans;
    }
};