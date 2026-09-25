class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> current;

        function<void(int)> backtrack = [&](int start) {
            if (current.size() == k) {
                result.push_back(current);
                return;
            }

            int remaining = k - current.size();

            for (int i = start; i <= n - remaining + 1; i++) {
                current.push_back(i);
                backtrack(i + 1);
                current.pop_back();
            }
        };

        backtrack(1);
        return result;
    }
};