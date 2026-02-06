class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//           // get size
//   int n = nums.size();
//   // allocate frequency array initialized to 0
//   vector<int> freq(n + 1, 0);
//   // scan elements
//   for (int i = 0; i < n; i++) {
//     // return current value if already seen
//     if (freq[nums[i]] == 0) {
//       // mark as seen
//       freq[nums[i]] += 1;
//     } else {
//       // duplicate found
//       return nums[i];
//     }
//   }
//   // fallback if none (per original)
//   return 0;

//optimal approach
    int slow=0;
    int fast=0;
    do{
        slow=nums[slow];
        fast= nums[nums[fast]];
    }
    while(slow!=fast);

    fast=0;

   while(slow!=fast){
       slow=nums[slow];
       fast= nums[fast];
   }
   return fast;
}
};