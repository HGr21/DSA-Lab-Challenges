class Solution {
    public:
        int firstUniqChar(string s) {
          // Step 1: Create a frequency map to store the count of each character
            unordered_map<char, int> freq;
            
            // Step 2: Count the frequency of each character
            for (char c : s) {
                freq[c]++;
            }
            
            // Step 3: Find the first character with a frequency of 1
            for (int i = 0; i < s.size(); i++) {
                if (freq[s[i]] == 1) {
                    return i;  // Return the index of the first non-repeating character
                }
            }
            
            // If no unique character exists, return -1
            return -1;  
        }
    };