class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        unordered_map<char, int> mp;
        string ans = "";

        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            mp[s[right]]++;

            while (mp['1'] >= k) {
                if (mp['1'] == k) {
                    string cur = s.substr(left, right - left + 1);

                    if (ans == "" ||
                        cur.size() < ans.size() ||
                        (cur.size() == ans.size() && cur < ans)) {
                        ans = cur;
                    }
                }

                mp[s[left]]--;
                left++;
            }
        }

        return ans;
    }
};