class Solution {
public:
    int strStr(string haystack, string needle) {
        std::string value = "";
        int index = 0;
        bool isFound = false;

        if (needle == haystack) {
            return 0;
        }
        if (needle.length() > haystack.length()) {
            return -1;
        }
        if (needle.length() == 1) {
            size_t pos = haystack.find(needle);
            return pos == string::npos ? -1 : (int)pos;
        }

        for (int i = 0; i + needle.length() <= haystack.length(); i++) {   
            value = haystack[i];
            for (int j = i + 1; j < haystack.length() && value.length() < needle.length(); j++) {  
                value += haystack[j];                                       
                if (needle == value) {
                    index = i;
                    isFound = true;
                    break;
                }
            }
            if (isFound) {
                break;
            }
        }

        return isFound ? index : -1;
    }
};