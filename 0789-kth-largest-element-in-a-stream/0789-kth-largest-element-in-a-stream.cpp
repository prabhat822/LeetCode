class KthLargest {
   
public:
    priority_queue<int,vector<int>,greater<int>> pq;
     int a;
    KthLargest(int k, vector<int>& nums): a(k) {
        for(auto it:nums)
            add(it);
    
        
    }
    
    int add(int val) {
        
        if(pq.size()<a)
            pq.push(val);
        else if(val>pq.top()){
            pq.pop();
            pq.push(val);
        }
        return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */