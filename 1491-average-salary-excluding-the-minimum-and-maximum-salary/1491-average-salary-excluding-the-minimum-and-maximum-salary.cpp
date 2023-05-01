class Solution {
public:
    double average(vector<int>& s) {
        double ans =0;
        int mini = INT_MAX , maxi=INT_MIN;
        for(int i =0;i<s.size();i++){
            mini = min(mini , s[i]);
            maxi = max(maxi,s[i]);
            ans +=s[i];
        }
        ans = ans - mini - maxi;
        return ans/(s.size()-2);
    }
};