class Solution {
public:
    int maxProduct(int n) {
        int mul = 1;
        while(n>0){
            int last = n%10;
            mul*=last;
            n/=10;
        }
        return mul;
    }
};