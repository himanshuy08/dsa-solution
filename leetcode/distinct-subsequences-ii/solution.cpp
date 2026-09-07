class Solution {
public:
    void solve(int i, string& s, string& curr,
               unordered_set<string>& ans) {
        
        if (i == s.size()) {
            if (!curr.empty())
                ans.insert(curr);
            return;
        }

        // Take
        curr.push_back(s[i]);
        solve(i + 1, s, curr, ans);
        curr.pop_back();

        // Skip
        solve(i + 1, s, curr, ans);
    }

    int distinctSubseqII(string s) {
        unordered_set<string> ans;
        string curr;

        solve(0, s, curr, ans);

        return ans.size();
    }
};