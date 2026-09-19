class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int k = size;
        int value = 0;
    for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] == nums[j]) {
                    for (int u = j; u < size - 1; u++) {
                        nums[u] = nums[u + 1];
                    }
                    size--; 
                    k--;
                    j--;    
                }
            }
        }
        return k;
    }
    
};