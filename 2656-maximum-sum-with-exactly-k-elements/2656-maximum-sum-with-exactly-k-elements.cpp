class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int temp = *max_element(nums.begin(), nums.end()); 
        int sum = 0; 
        while(k--){
            sum += temp;
            temp++; 
        }
        return sum;
    }
};