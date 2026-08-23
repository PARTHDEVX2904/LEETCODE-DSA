class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        set<int> st;
        for(int num : nums){
            st.insert(num);
        }
        vector<vector<int>> res;
        vector<int> temp;
        int i = lower;
        while(i <= upper){
            if(st.count(i)==0){
                if(temp.empty() || temp.size()==1){
                    temp.push_back(i);
                }else{
                    temp.back() = i;
                }
            }
            else{
                if(!temp.empty()){
                if(temp.size()==1){
                    res.push_back({temp[0],temp[0]});
                }else{
                    res.push_back(temp);
                }
                temp.clear();
               }
            }
            i++;
        }
            if(!temp.empty()){
                    if(temp.size()==1){
                        res.push_back({temp[0],temp[0]});
                    }else{
                        res.push_back(temp);
                    }
                    temp.clear();
                }
        return res;
    }
};