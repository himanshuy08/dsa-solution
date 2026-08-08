class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<int> ans;
        int j = 0;
        bool changed = false;

        for (int i = 0; i < n && j < m; i++) {
            if (word1[i] == word2[j]) {
                ans.push_back(i);
                j++;
            }
            else if (!changed) {
                ans.push_back(i);
                j++;
                changed = true;
            }
        }

        if (j == m) {
            return ans;
        }

        return {};
    }
};