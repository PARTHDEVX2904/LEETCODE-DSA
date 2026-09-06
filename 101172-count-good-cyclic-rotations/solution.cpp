class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int half = n/2;
        int good_count = 0;

        // we will extand and do nums + nums
        vector<int> extend = nums;
        extend.insert(extend.end(),nums.begin(),nums.end());

        long long  first_half = 0;
        long long  second_half = 0;
        for(int i=0;i<half;i++){
            first_half += extend[i];
        }
        for(int i=half;i<n;i++){
            second_half += extend[i];
        }
        
        if(first_half>second_half){
            good_count++;
        }
        for(int i=0;i<n-1;i++){
            first_half = first_half - extend[i] + extend[i+half];
            second_half = second_half - extend[i+half] + extend[i+n];

            if(first_half > second_half){
                good_count++;
            }
        }

        return good_count;
    }
};