class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size()-1;
        if (n == 0){
            return nums[0];
        }
        int count = 1;       
        sort(nums.begin(),nums.end());
        int prev = nums[n];
        int maxNo = nums[n];
        for (int i = n-1; i >= 0; i--){        
            if (nums[i] != prev){
                cout<<prev;
                count++;
                prev = nums[i];
                if (count == 3){
                    return nums[i];
                }
            }
            if (i == 0){
                return maxNo;
            }          
        }
        return 0;
    }
};
