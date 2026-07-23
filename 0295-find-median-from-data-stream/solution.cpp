class MedianFinder {
public:
    priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mn;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(mx.size()==0 && mn.size()==0) {
            mx.push(num);
            return;
        }
        if(num<mx.top()) mx.push(num);
        else mn.push(num);
        if(mn.size()>mx.size()){
            mx.push(mn.top());
            mn.pop();
        }
        if(mn.size()+2==mx.size()){
            mn.push(mx.top());
            mx.pop();
        }
        
    }
    
    double findMedian() {
        double med=0;
        if((mx.size()+mn.size())%2==0){
            med+=mx.top();
            med+=mn.top();
            med/=2;
        }
        else med=mx.top();
        return med;
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */