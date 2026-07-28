class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;

        for (char c : s)
            mp[c]++;

        string ans = "", mid = "";

        for (auto it : mp) {
            while (it.second > 1) {
                ans += it.first;
                it.second -= 2;
            }

            if (it.second)
                mid = it.first;
        }

        string rev = ans;
        reverse(rev.begin(), rev.end());

        return ans + mid + rev;
    }
};