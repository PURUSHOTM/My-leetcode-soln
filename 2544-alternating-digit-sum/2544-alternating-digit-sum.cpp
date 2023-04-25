class Solution {
public:
    int alternateDigitSum(int n) { 
        string str = to_string(n); 
        int sum1 = 0, sum2 = 0;
        int sign = 1; 
        for (int i = 0; i < str.length(); i++) {
            int digit = str[i] - '0'; 
            if (i == 0) {
                sum1 += digit;
            }
            else {
                if (sign == 1) {
                    sum2 += digit;
                    sign = -1; 
                }
                else {
                    sum1 += digit;
                    sign = 1; 
                }
            }
        }
        return sum1 - sum2;
    }
};