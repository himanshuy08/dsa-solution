class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        for (int i = 1; i < nums1.size(); i++) {
            if (nums1[i] != nums1[0])
                return false;
        }
        return true;
    }
};