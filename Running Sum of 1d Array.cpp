// for time complexcity
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec(n);
        vec[0] = nums[0];
        for(int i = 1; i < n; i++ ){
           vec[i] = vec[i-1] + nums[i];
        }
        return vec;
    }
};

// for memory
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            int sum = nums[i-1]+nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};
