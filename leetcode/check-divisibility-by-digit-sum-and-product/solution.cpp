class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int prod=1;
        while(n>0){
            int last = n%10;
            sum=sum*10+last;
            prod=prod*last;
            n/=10;
        }

        if(n/(sum+prod)==0) return true;

        return false; 
    }
};