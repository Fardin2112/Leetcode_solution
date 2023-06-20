class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
          int s2_i = 0;
        int c2_i = 0;

        for(auto& s: word1)
            for(auto& c : s)
                if( c2_i < word2[s2_i].size())
                    {
                    if(c != word2[s2_i][c2_i++])
                        return false;
                    }   
                else if (++s2_i < word2.size() )
                    {
                        c2_i = 0;
                        if(c != word2[s2_i][c2_i++])
                            return false;
                    }
                else
                    return false;
                    
                
        return s2_i == word2.size() - 1 && c2_i == word2[s2_i].size();  
    }
};
