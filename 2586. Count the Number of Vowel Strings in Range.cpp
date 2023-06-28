class Solution {
public:
    bool isvowel(char s){
        return s == 'a' || s == 'e'|| s == 'i'|| s == 'o'|| s == 'u';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
       int cnt = 0;
       for(int i = left; i <= right; i++){
           int n = words[i].length()- 1;
           if(isvowel(words[i][0]) && isvowel (words[i][n])){
               cnt++;
              }
       } 
       return cnt;
    }
};
