class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> st;
        for(auto it: nums) st.insert(it); 
        
        int count = 0;
        for(auto it: st)  if(it > 0 ) count++; 
        return count;
    }
};