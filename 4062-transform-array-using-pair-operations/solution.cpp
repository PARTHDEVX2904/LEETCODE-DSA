class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long  src = 0;
        long long  tar = 0;
        for(int i=0;i<source.size();i++){
            src += source[i];
            tar += target[i];
        }

        return src == tar;
    }
};