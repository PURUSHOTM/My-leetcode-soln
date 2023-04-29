class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto it: stones) pq.push(it);
        int top1 = 0;
        int top2 = 0;
        while(pq.size()>1){
            top1 = pq.top();
            pq.pop();
            top2 = pq.top();
            pq.pop();
            if(top2!=top1){
                pq.push(top1-top2);
            } 
        }
        if(pq.size()== 1)
        return pq.top();
        
        return 0;
    }
};

