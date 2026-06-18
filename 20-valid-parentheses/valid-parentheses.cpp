class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0){
            return false;
        }
        int i =0;
        stack<char>st;
        while(i<s.size()){
            if((s[i] == '[') || (s[i] == '(' )|| (s[i] =='{' )){
                st.push(s[i]);
            }
            if(s[i]==')'){
                    if(  !st.empty() && st.top()=='('){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            if(s[i]==']'){
                    if(  !st.empty() && st.top()=='[' ){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            if(s[i]=='}'){
                    if(  !st.empty() && st.top()=='{'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                i++;
           }
           if(st.empty()){
            return true;
           }
        return false;
    } 
};