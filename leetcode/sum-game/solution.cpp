class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int sum = 0, q = 0;

        for (int i = 0; i < n; i++) {
            if (num[i] == '?') {
                if (i < n / 2) q++;
                else q--;
            } else {
                if (i < n / 2)
                    sum += num[i] - '0';
                else
                    sum -= num[i] - '0';
            }
        }

        if (q % 2 != 0)
            return true;

        return abs(sum) != abs(q) * 9 / 2;
    }
};