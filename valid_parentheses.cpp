Snehlata1111
Leetcode-30day

Type / to search
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Files
Go to file
t
stacks
20-valid-parentheses.cpp
README.md
Leetcode-30day/stacks
/20-valid-parentheses.cpp
Snehlata1111
Snehlata1111
Leetcode 20
c8a7fbd
 · 
now
Leetcode-30day/stacks
/20-valid-parentheses.cpp

Code

Blame
34 lines (33 loc) · 735 Bytes
class Solution {
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
        else if(!st.empty()){
            if(s[i]==')' && st.top()=='('){
                st.pop() ;
            }
            else if(s[i]==']' && st.top()=='['){
                st.pop() ;
            }
            else if(s[i]=='}' && st.top()=='{'){
            st.pop() ;
            }
            else{
                return 0;
            }
        }
        else{
                return 0;
            }
        }

        if(st.size() != 0)
        {
        return 0;
        }else
        return 1;
    }
};
