class Solution {
public:
    string frequencySort(string s) {
        //initialise max_heap
        priority_queue<pair<int,char>> pq;

        // we stored it  in map in order of characters 
        map<char, int> freq;
        for(char c : s){
            if(freq.find(c)==freq.end()){
                freq[c] = 1;
            }
            else{
                freq[c]++;
            }
        }

        for(auto it:freq){
           int count = it.second;
           char ch = it.first;
           pq.push({count,ch});
        }

        string res="";
        while(!pq.empty()){
            pair<int,char> temp = pq.top();
            pq.pop();
            char ch = temp.second;
            int cnt = temp.first;
            while(cnt--){
                res += ch;
            }
        }

        return res;

    }
};