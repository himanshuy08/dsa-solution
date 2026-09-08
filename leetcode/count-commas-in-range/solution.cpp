class Solution {
public:
    int countCommas(int n) {
        if (n < 1000)
            return 0;

        long long ans = 0;

        if (n >= 1000) {
            ans += n - 1000 + 1;
        }

        if (n >= 1000000) {
            ans += (long long)(n - 1000000 + 1);
        }

        return ans;
    }
};