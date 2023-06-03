class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans = 0;
        int max =nums[0];
        for (int i = 1; i < nums.size(); i++){  
        if ( nums[ i ] > max )  
            max = nums[ i ] ;  
        }
        for (int i = 0; i < nums.size(); i++){
            if (max < nums[i]*2){
                if (max != nums[i]){
                return -1;
                }else
                ans = i;
                
            }
        }
        return ans;
    }
};
