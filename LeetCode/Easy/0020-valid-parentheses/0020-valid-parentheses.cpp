// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char>stack;
//         int i=0;

//         for(i;i<s.length();i++){
//             if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//                 stack.push(s[i]);
//             }
//         }

//         for(i;i<s.length();i++){
//             if(stack.top()==s[i]){
//                 stack.pop();
//             }
//         }

//         if(stack.empty()){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };








class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                stk.push(ch);
            }

            else {
                if (stk.empty()) {
                    return false;  
                }

                char top = stk.top();

                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    stk.pop();
                } else {
                    return false;  
                }
            }
        }

        return stk.empty();
    }
};