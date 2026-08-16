class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int curflo = 0, time = 0;
        for (int i = 0; i < requests.size(); i++) {
            time += abs(curflo - requests[i]);
            curflo = requests[i];
        }
        return time;
    }
};