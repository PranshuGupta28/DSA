class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>>ans;
        vector<vector<int>>out;

        sort(nums.begin(),nums.end());

        for(int i = 0; i<nums.size()-2; i++){

            int j = i+1;

            int k = nums.size()-1;

            while(j<k){
                int sum = 0;
                if(nums[i]+nums[j]+nums[k]==sum){
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;           
                }
                else if (nums[i]+nums[j]+nums[k] < sum){
                    j++;
                }
                else{
                    k--;
                }
            }
        }


        // for(int i = 0; i<nums.size()-2; i++){

        // int j = i+1;

        // int k = nums.size()-1;

        // while(j<k){
        //     int sum = 0;
        //     if(nums[i]+nums[j]+nums[k]==sum){
        //         ans.push_back({nums[i],nums[j],nums[k]});
        //         j++;
        //         k--;         
        //     }
        //     if (nums[i]+nums[j]+nums[k] < sum){
        //         j++;
        //     }
        //     else{
        //         k--;
        //     }
        //  }
        // }
        for (auto i : ans) {
        out.push_back(i);
    }
           return out;
    }
};