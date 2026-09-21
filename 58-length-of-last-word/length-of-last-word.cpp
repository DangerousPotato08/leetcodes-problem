class Solution {
public:
    
 int lengthOfLastWord(string s) {

        int count = 0;
        int i = 0;

        while (i < s.length()) {

            while (i < s.length() && s[i] == ' ') {
                i++;
            }

           
            if (i < s.length()) {
                count++;

                // Skip characters of the word
                while (i < s.length() && s[i] != ' ') {
                    i++;
                }
            }
        }

        vector<string> arr(count);

        int cursor = 0;

        for (int j = 0; j < count; j++) {

            while (cursor < s.length() && s[cursor] == ' ') {
                cursor++;
            }

            while (cursor < s.length() && s[cursor] != ' ') {

                arr[j] += s[cursor];
                cursor++;
            }
        }


        for (int j = count - 1; j >= 0; j--) {

            if (arr[j] != "") {
                return arr[j].length();
            }
        }

        return 0;
    }
    
};