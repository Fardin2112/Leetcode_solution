class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int maxproduct1 = nums[n]*nums[n-1]*nums[n-2];
        int maxproduct2 = nums[0]*nums[1]*nums[n];
        return max(maxproduct1,maxproduct2);
    }
};
