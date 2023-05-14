class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int res{};
        for (auto s : tokens) {
            if (s.size() > 1 || isdigit(s[0])) {
                st.push(stoi(s));
            }
            else {
                auto b = st.top();
                st.pop();
                auto a = st.top();
                st.pop();
                if (s[0] == '+') {
                    res = a + b;
                }
                else if (s[0] == '-') {
                    res = a - b;
                }
                else if (s[0] == '/') {
                    res = a / b;
                }
                else if (s[0] == '*') {
                    res = a * b;
                }
                st.push(res);
            }
        }
        return st.top();
    }
};