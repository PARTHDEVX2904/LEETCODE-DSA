class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,bool> freq;
        int index = 0;
        int count = 0;

        while(index < s.length()){
            if(freq.find(s[index]) != freq.end()){
                count++;
                freq.clear();
            }
            freq[s[index++]] = true;
        }

        return count+1;
    }
};