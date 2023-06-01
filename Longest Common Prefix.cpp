class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result ="";
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string first = strs.front();
        string last = strs[n-1];

        for(int i=0; i<first.size(); i++){
            if(first[i]!=last[i]){
            return result;
            }
            result += first[i];            
        }
        return result;    
    }
};
