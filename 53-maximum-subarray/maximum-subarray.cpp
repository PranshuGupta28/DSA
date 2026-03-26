class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxsum=nums[0];
       int sum=0;
       int n = nums.size();
    //    for (int st=0;st<n;st++){
    //     for (int e =st;e<n;e++){
    //         int sum=0;
    //         for(int i=st;i<=e;i++){
    //             sum=sum+nums[i];
    //         }  
    //         maxsum=max(sum,maxsum);
    //     }
    // }
    for(int i=0;i<n;i++){
        sum=sum+nums[i];
        maxsum=max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }
    return maxsum;
  }
};