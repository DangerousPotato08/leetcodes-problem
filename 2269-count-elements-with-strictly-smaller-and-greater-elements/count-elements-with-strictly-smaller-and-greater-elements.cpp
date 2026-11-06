class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        auto p = minmax_element(nums.begin(),nums.end());
        for(int i = 0; i < nums.size();i++){
            if(nums[i]< *p.second && nums[i] > *p.first){
                count++;
            }
        }
        return count ;
    }
};