class Solution {
public:
    int longestValidParentheses(string str) {
        int open = 0, close = 0, ans = 0;

        // Left to right pass
        for (int i = 0; i < str.size(); i++) {
            char c = str[i];
            if (c == '(') open++;
            else close++;

            if (open == close) ans = max(ans, 2 * open);
            else if (close > open) {
                open = 0;
                close = 0;
            }
        }

        // Right to left pass
        open = 0;
        close = 0;
        for (int i = str.size() - 1; i >= 0; i--) {
            char c = str[i];
            if (c == ')') close++;
            else open++;

            if (open == close) ans = max(ans, 2 * open);
            else if (open > close) {
                open = 0;
                close = 0;
            }
        }

        return ans;
    }
};