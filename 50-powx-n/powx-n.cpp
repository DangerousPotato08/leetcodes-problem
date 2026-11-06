class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1; 
        bool isNegetive = false;
        long long int power = n ; 
        if(power<0){
            isNegetive = true;
            power = power*(-1) ;
        }
        while(power>0){
            if(power%2==0){
                x = x*x ;
                power = power/2;
            }
            else{
                ans = ans * x;
                power = power -1;
            }
        }
        if(isNegetive==true){
            ans = 1/ans;
        }
        return ans;
    }
};