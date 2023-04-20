class Solution {
public:
    int tribonacci(int n) {
        long long a = 0;
        long long b = 1;
        long long c = 1;
        long long d ;
        long long count = 0;
        while(count <+ n){
            d = a + b + c;
            a = b;
            b = c;
            c = d;
            count++;
        }
        return a;
    }
};