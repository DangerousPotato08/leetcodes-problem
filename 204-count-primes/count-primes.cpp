class Solution {
public:
    int countPrimes(int n) {
        int prime[n+1];
        int count = 0; 
        for(int i = 2 ; i <= n; i++){
            prime[i] = 1;
        }

        for(int i = 2; i <= sqrt(n);i++){
            if(prime[i]==1){
                for(int j = i*i;j <=n;j+=i){
                    prime[j] = 0; 
                }
            }
        }

        for(int i = 2;i <n;i++){
            if(prime[i]==1){
                count++;
            }
        }
        return count;
    }
};