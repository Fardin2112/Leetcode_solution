class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int j=0;
        int n=nums.size()-1;
        if(n==0){
            return true;
        }
        while(nums[j]==nums[j+1]){
            j++;
            n--;
            if(n==0){
                return true;
            }
        } 
        
        if(nums[j] < nums[j+1]){           
            for(int i=j; i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){
                    return false;
                }
            }  
        }
        else if(nums[j]> nums[j+1]){
            for(int i=j; i<nums.size()-1;i++){
                if(nums[i] < nums[i+1]){
                   return false;
                }                       
            }   
        }
        return true;
    }
};
