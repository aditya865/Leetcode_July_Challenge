class Solution {
public:
       int arrangeCoins(int n) {
        return (int) floor((-1+sqrt(1+8.0*n))/2);
    }
};
