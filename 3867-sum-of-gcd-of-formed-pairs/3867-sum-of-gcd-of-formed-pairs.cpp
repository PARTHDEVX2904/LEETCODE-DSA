class Solution {
private:
    long long gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
public:
    long long gcdSum(vector<int>& nums) {
       int n = nums.size();
       int mx = INT_MIN;
       vector<long long> prefixGcd;
       for(int i=0;i<n;i++){
        int curr = nums[i];
        mx = max(curr,mx);
        long long temp = gcd(curr,mx);
        prefixGcd.push_back(temp);
       }

       //sort in increasing order
       sort(prefixGcd.begin(),prefixGcd.end());

       long long ans = 0;
       int s = 0;
       int e = prefixGcd.size()-1;
       while(s<e){
        long long temp = gcd(prefixGcd[s],prefixGcd[e]);
        ans += temp;
        s++;
        e--;
       }

        return ans;
    }
};