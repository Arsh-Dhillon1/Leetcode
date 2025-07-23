class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int maxLen = 0;
        int start = 0;  

        for (int i = 0; i < s.length(); ++i) {
            char currentChar = s[i];

            if (lastSeen.count(currentChar) && lastSeen[currentChar] >= start) {
                start = lastSeen[currentChar] + 1;
            }

            lastSeen[currentChar] = i;

            maxLen = max(maxLen, i - start + 1);
        }

        return maxLen;
    }
};
