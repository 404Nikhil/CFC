class KthLargest {
public:
// min-heap
 priority_queue<int, vector<int>, greater<int>> pq;
    int K;
    
    KthLargest(int k, vector<int>& nums) {
        K = k;
        for(int &x : nums) {
            pq.push(x);
            
            if(pq.size() > k)
                pq.pop();  // min  element will be popped
        }
    }
    
    int add(int val) {
        pq.push(val);
        
        if(pq.size() > K)
            pq.pop();
        
        return pq.top();
    }
};


// mlog(k) addd
// nlogn for funcn pop
// min heap so chote elements uper 