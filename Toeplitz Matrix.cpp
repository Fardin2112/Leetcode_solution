class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        vector<int>temp;
        for (int i = 0; i < m.size() - 1; i++) {
            for (int j = 0; j < m[i].size() -1; j++){          
                temp.push_back(m[i][j]);
                if(temp[j] != m[i+1][j+1]){
                    return false;
                }
             }
             temp.clear();           
        }
        return true;
    }
};
