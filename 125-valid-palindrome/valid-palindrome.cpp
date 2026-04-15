class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(int i =0; i <s.size(); i++){
            if(!isalnum(s[i])){
                continue;
            }
            st += tolower(s[i]);
        }
        int start =0;
        int end = st.size()-1;
        while(start<=end){
            if(st[start] != st[end]){
                return false;
            }
            start++;
            end--;
        } 
        return true;
    }
};