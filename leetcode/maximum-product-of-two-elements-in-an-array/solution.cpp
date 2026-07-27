class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int first=0,second=0,i=0;
        while(i<n){
            if(nums[i]>=first){
                second = first;
                first = nums[i];
            }
            else if(nums[i]>second){
                second = nums[i];
            }

            i++;
        }

        return (first-1)*(second-1);
    }
};