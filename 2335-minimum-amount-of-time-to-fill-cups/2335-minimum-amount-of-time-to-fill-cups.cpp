class Solution {
public:
    int fillCups(vector<int>& amount) {
        int count  =0;
        sort(amount.rbegin(), amount.rend());
        while(amount[0] > 0){
            if(amount[1] > 0){
                amount[0] -= 1;
                amount[1] -= 1;
                count++;
                sort(amount.rbegin(), amount.rend());
            }
            else{
                count += amount[0];
                amount[0] = 0;
            }
        }
        return count;
    }
};