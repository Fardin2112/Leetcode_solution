class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i=0; i<details.size(); i++){
           int num=(details[i][11]-'0')*10+(details[i][12]-'0');
           if(num>60){
               count++;
           }
        }
        return count;
    }
};
