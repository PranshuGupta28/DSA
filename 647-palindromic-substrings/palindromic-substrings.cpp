class Solution {
public:
    bool checkpalindromic(string&a){
            int s =0;
            int e = a.size()-1;
            while (s<=e){
                if (a[s]!=a[e]){
                    return false;
                }
                s++;
                e--;
            }
            return true;
    }
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        vector<string>a;
        for (int i = 0 ;i < n; i++){
            for (int j = i; j<n ; j++){
               a.push_back(s.substr(i,j-i+1));
            }
        }
        for(int i = 0;i<a.size();i++){
            if (checkpalindromic(a[i])){
                count++;
            }
        }
        return count;
    }
};