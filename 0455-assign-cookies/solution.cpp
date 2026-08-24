class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) { 
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        int studentIndex = 0; 
        int cookieIndex = 0;  

        
        while (studentIndex < g.size() && cookieIndex < s.size()) {
            if (s[cookieIndex] >= g[studentIndex]) {
                studentIndex++; 
            }
            cookieIndex++; 
        }

        return studentIndex;
    }
};