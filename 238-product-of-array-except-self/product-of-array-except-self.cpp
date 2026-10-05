class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prex(n,1);
        vector<int>sufx(n,1);
        vector<int>ans(n,1);

        for(int i = 1 ; i < n ; i++){
            prex[i]=nums[i-1]*prex[i-1];
        }
        for(int i = n-2 ; i >=0 ; i--){
            sufx[i]=nums[i+1]*sufx[i+1];
        }
        for (int i = 0 ; i<n; i++){
            ans[i] = prex[i]*sufx[i];
        }
        return ans;
    }
};