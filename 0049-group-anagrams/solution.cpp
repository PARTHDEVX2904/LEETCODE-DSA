class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            string org = temp;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(org); // it is stored like aet - {ate,eat,tea}
        }

        vector<vector<string>> res;
        for(auto& it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};