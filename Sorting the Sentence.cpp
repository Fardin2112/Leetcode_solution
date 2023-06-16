class Solution {
public:
    string sortSentence(string s) {
        //substring the stringin words ans push into vector
        stringstream str(s);
        string word;
        vector<string>temp;
        while(str>>word){
            temp.push_back(word);
        }
        int n = temp.size();
        // make another vector for insert sorted string
        vector<string>temp2(n);
        for(int i=0; i<n;i++){
            // n2 is size of words
            int n2 = temp[i].size()-1;
            int n3=temp[i][n2]-'0';
            // substring 0 to lastinsex-1 bec we have to delete digit
            string t = temp[i].substr(0,n2);
            temp2[n3-1] = t;   
        }
        // convert vector to string
        s=temp2[0];
        for(int i=1; i<n; i++){
            s=s+" "+temp2[i];
        }
    return s;    
    }
};
