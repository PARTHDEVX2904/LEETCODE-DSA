class KthLargest {
private:
    int k;
    std::priority_queue<int, std::vector<int>,std::greater<int>> minHeap;

public:
    
    
    int add(int val) {
        minHeap.push(val);
        if (minHeap.size() > k){
            minHeap.pop();}
        return minHeap.top();
    }
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int num:nums){
            add(num);
        }
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */