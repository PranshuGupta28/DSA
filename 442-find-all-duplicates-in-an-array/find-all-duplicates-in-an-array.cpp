class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> f;
        vector<int>ans;
        for(int i = 0 ; i<nums.size();i++){
            if(f.find(nums[i])!=f.end()){
                ans.push_back(nums[i]);
            }
            f[nums[i]] = i;
        }
        return ans;
    }
};