class Solution {
    public:
        int longestPalindrome(string s) {
           unordered_map<char, int> freq;
            
            // Count the frequency of each character in the string
            for (char c : s) {
                freq[c]++;
            }
            
            int length = 0;
            bool oddFound = false;
            
            // Iterate over the frequency map
            for (auto& entry : freq) {
                int count = entry.second;
                
                // If the count is even, add the entire count to the palindrome length
                if (count % 2 == 0) {
                    length += count;
                } else {
                    // If the count is odd, add the largest even part (count - 1)
                    length += count - 1;
                    oddFound = true;
                }
            }
            
            // If there's any odd frequency, we can add one character in the middle
            if (oddFound) {
                length += 1;
            }
            
            return length; 
        }
    };