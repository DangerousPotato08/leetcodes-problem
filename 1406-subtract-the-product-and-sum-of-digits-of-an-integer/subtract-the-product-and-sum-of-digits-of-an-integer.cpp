class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1; 
        int sum= 0;
        int value = 0;
        while(n!=0){
            value = n%10;
            n/=10;
            sum += value;
            product *= value;
        }
        return product - sum;
    }

};