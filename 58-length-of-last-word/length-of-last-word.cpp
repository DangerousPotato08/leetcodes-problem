class Solution {
public:
    
 int lengthOfLastWord(string s) {

        int count = 0;
        int i = 0;

        // Count the number of words
        while (i < s.length()) {

            // Skip spaces
            while (i < s.length() && s[i] == ' ') {
                i++;
            }

            // If a word is found
            if (i < s.length()) {
                count++;

                // Skip characters of the word
                while (i < s.length() && s[i] != ' ') {
                    i++;
                }
            }
        }

        // Create a vector to store words
        vector<string> arr(count);

        int cursor = 0;

        // Store each word
        for (int j = 0; j < count; j++) {

            // Skip spaces
            while (cursor < s.length() && s[cursor] == ' ') {
                cursor++;
            }

            // Store characters of the word
            while (cursor < s.length() && s[cursor] != ' ') {

                arr[j] += s[cursor];
                cursor++;
            }
        }

        // Find the last word
        for (int j = count - 1; j >= 0; j--) {

            if (arr[j] != "") {
                return arr[j].length();
            }
        }

        return 0;
    }
    
};