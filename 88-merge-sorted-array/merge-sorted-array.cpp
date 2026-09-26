class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = 0;
        for(int i = m ; i < m+n ; i++){
            for(int j = index ; j< index + 1 ; j++){
                nums1[i] = nums2[j];
            }
            index +=1;
        }
        //sorting 
        int value = 0 ; 
        for(int k = 0 ; k < nums1.size();k++){
            for(int i = 0 ; i < nums1.size(); i++){
                if(nums1[k]< nums1[i]){
                    value = nums1[k];
                    nums1[k] = nums1[i];
                    nums1[i] = value; 
                }
            }
        }
    }
};