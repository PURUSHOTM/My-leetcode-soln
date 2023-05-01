class KthLargest {
public:
    priority_queue<int , vector<int> , greater<int>> pq;
    int kk;
    KthLargest(int k, vector<int>& nums) {
        kk = k;
        for(auto it: nums){
            pq.push(it);
            if(pq.size() > k) 
                 pq.pop(); 
        }
    }
    
    int add(int val) {
        pq.push(val);

        if( pq.size() > kk ){
            pq.pop();
        }
        return pq.top();
    }
};