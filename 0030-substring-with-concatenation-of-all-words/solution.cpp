class Solution {
public:

    bool checkSubstr(unordered_map<string, int> wordCount, string s, int wordLen){
        for(int j=0; j<s.size(); j+=wordLen) {
            string w = s.substr(j, wordLen);
            if(wordCount.find(w) != wordCount.end()) {
                if(--wordCount[w] == -1) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        int sLen = s.length();
        int wordLen = words[0].size();
        int wordsWindow = words.size() * wordLen;
        vector<int> res;

        unordered_map<string,int> wordCount;
        for(int i=0;i<words.size();i++){
            wordCount[words[i]]++;
        }

        int i = 0;
        while(i + wordsWindow <= sLen){
            if(checkSubstr(wordCount , s.substr(i,wordsWindow),wordLen)){
                res.push_back(i);
            }
            i++;

        }
        return res;
    }
};