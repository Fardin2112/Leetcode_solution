class Solution {
public: 
    void nextPermutation(vector<int>& nums) {
      int n1 = -1;
      for (int i=nums.size()-2;i>=0;i--){
          if(nums[i]<nums[i+1]){
              n1=i;
              break;
          }
      }
      for(int i=nums.size()-1; i>=n1 && n1 != -1; i--){
            if(nums[i]>nums[n1]){
                swap(nums[i],nums[n1]);
                break;
              }
        }
        reverse(nums.begin() + n1 + 1, nums.end());
    }
};
