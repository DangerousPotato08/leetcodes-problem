class Solution {
public:
    int reverse(int x) {
    long long reverse1 = 0;
    int value = 0;
    while(x!=0){
        value = x%10;
        reverse1 = reverse1 * 10 + value; 
        x = x/10;
    }
    if(reverse1 > INT_MAX || reverse1 < INT_MIN){
        return 0;
    }
    else{
        return reverse1;
    } 
    }
};