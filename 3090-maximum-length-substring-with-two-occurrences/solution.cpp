class Solution {
public:
    int maximumLengthSubstring(string s) {
        //sliding window concept with a hash map
        map<char,int> freq;
        int left = 0;
        int ans = INT_MIN;
        
        for(int right = 0;right<s.length();right++){
            //add the element
            freq[s[right]]++;

            //shrink the window unntil it is valid
            while(freq[s[right]] > 2){
                freq[s[left]]--;
                left++;
            }

            ans = max(ans,right-left+1);
        }

        return ans;
    }
};