class Solution {
public:
    void sortColors(vector<int>& nums) {

        int count0s=0;
        int count1s=0;
        int count2s=0;

        for (int i=0 ; i<nums.size();i++){
            if(nums[i]==0)
            count0s++;

            else if(nums[i]==1)
            count1s++;

            else
            count2s++;
        }

        for (int i=0 ; i<count0s;i++)
           nums[i]=0;

        for (int i=count0s ; i<(count0s+count1s);i++)
           nums[i]=1;

        for (int i=(count0s+count1s) ; i<nums.size();i++)
           nums[i]=2;     
        
    }
};