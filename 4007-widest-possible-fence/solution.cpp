class Solution {
public:
    int maximumWidth(vector<int>& planks) {
        unordered_map<int,int> count , ans;
        for(int i:planks){
            count[i]++;
        }

        // as it  is given that they are result of itself , so i can store them in as result
        ans = count;

        for(auto a : count){
            for( auto b: count){
                int x = a.first , h = b.first;
                if(x<h){
                    ans[x+h] += min(count[x],count[h]);
                }
                if(x==h){
                    ans[x+h] += count[x]/2;
                }
            }
        }
        //take the answer of the max count 
        int max_val = INT_MIN;
        for(auto temp : ans){
            max_val = max(max_val,temp.second);
        }
        return max_val;


    }
};