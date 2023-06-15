class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        int n=0;
        int k=strs[0].size();
        while(k >=0){
            bool ans = false;
           for(int i=0; i<strs.size()-1; i++){
               if(strs[i][n]>strs[i+1][n]){
                   ans = true;
               }
           }
           if(ans==true){
               count++;
           }
           n++;
           k--;
        }
        return count;
    }
};
