class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1; 
        int mid=(end-start)/2;  
        int ans=0;
        while(start<=end){  
             mid =(start+end)/2;           
             if(target==nums[mid]){
                return mid;
             }
             else if(target>nums[mid]){
                 start=mid+1;
                 ans=start;
             }else{
                 end=mid-1;
             }           
        }
        return ans;
    }
};
