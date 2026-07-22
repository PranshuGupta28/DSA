class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size()){
            k = k % nums.size();
        }
        vector<int>ans;
        int i = 0;
        int j= nums.size()-k;
        while(i<k){
            ans.push_back(nums[j]);
            j++;
            i++;
        }

        for(int i = 0; i<nums.size()-k ; i++){
            ans.push_back(nums[i]);
        }
        nums = ans;
    }
};