class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        st.push(s[0]);
        for (size_t i = 1; i < n; ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if (st.size() == 0) {
                    return false;
                }
                if (s[i] == ')' && st.top() == '(') {
                    st.pop();
                }
                else if (s[i] == '}' && st.top() == '{') {
                    st.pop();
                }
                else if (s[i] == ']' && st.top() == '[') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        if (st.size() == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};