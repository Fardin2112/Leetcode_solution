class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       int index = 0;
       int cnt = 0;
       int temp_cnt=0;
       for(int i=0; i<mat.size(); i++){
           for(int j=0; j<mat[i].size(); j++){
               if(mat[i][j] == 1){
                   temp_cnt++;
               }
           }
           if(cnt < temp_cnt){
               index = i;
               cnt = temp_cnt;
           }
           temp_cnt = 0;
       }
       return  {index,cnt}; 
    }
};
