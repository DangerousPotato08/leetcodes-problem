class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char character  = ' ' ; 
        string common = "" ; 
        int size = strs.size();
        int word_size = strs[0].length(); 
        for(int i = 0; i < word_size ; i++){
            character = strs[0][i];
            for(int j = 0 ; j < size ; j++){
                if(i>strs[j].length()-1 || character != strs[j][i]){
                    return common;
                }
            }
            common = common + character ; 
            
        }
        return common;
    
    }
};