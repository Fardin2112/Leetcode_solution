class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec;
        for(auto i:nums ){
           vec.push_back(i * i);
        }
        sort(vec.begin(),vec.end());
      return vec;  
    }
};
