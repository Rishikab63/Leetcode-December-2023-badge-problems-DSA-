//1464. Maximum Product of Two Elements in an Array

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        ans=(nums[i]-1) * (nums[--i]-1);
        return ans;
    }
};
