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

/------------------------------------------------------------------------------------------------------------------------------------------------------------/
    
//with space complexity O(n)

class MinStack {
public:
    stack<long long int> s ;
    long long int minVal ;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
        s.push(val) ;
        minVal = val ;
        }
        else
        {
            if(val<minVal) {
            s.push((long long)2*val - minVal) ;
            minVal=val ;
            }
            else{
                s.push(val) ;
            }
        }
    }
    
    void pop() {
        if(s.top()<minVal){
        minVal = 2*minVal - s.top();
        }

        s.pop() ;
    }
    
    int top() {
        if(s.top()<minVal){
            return minVal ;
        }

        else{
            return s.top() ;
        }
        
    }
    
    int getMin() {
        return minVal ;
    }
};
