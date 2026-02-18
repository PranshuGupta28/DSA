class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int n = nums.size();
        
        // // Iterate through each element of the array
        // for (int i = 0; i < n; i++) {
            
        //     // Counter to count occurrences of nums[i]
        //     int cnt = 0; 
            
        //     // Count the frequency of nums[i] in the array
        //     for (int j = 0; j < n; j++) {
        //         if (nums[j] == nums[i]) {
        //             cnt++;
        //         }
        //     }
            
        //     // Check if frequency of nums[i] is greater than n/2
        //     if (cnt > (n / 2)) {
        //         // Return the majority element
        //         return nums[i]; 
           // Size of the given array        
        // Hash map to store element counts
        unordered_map<int, int> mp;
        
        // Count occurrences of each element
        for (int num : nums) {
            mp[num]++;
        }
        
        /* Iterate through the map to
        find the majority element*/
        for (auto& pair : mp) {
            if (pair.second > n / 2) {
                return pair.first;
            }
        }
        
        // Return -1 if no majority element is found
        return -1;
            }
};