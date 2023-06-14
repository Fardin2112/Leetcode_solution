class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       string n = s;
        for (int i = 0; i < s.size(); i++) {
            s[indices[i]] = n[i];
        }
        return s;
    }
};
