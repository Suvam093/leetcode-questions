class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true;
        stack<char> st;
        for(char ch : s){
            if(ch=='(' || ch =='{' || ch == '['){
                st.push(ch);
            }
            else if(ch == ')' && !st.empty() && st.top() == '('){
                st.pop();
            }
            else if(ch == '}' && !st.empty() && st.top() == '{'){
                st.pop();
            }
            else if(ch == ']' && !st.empty() && st.top() == '[' ){
                cout<<st.top()<<endl;
                st.pop();
            }
            else return false;
        }
        if(st.empty()) return true;
        return false;
    }
};