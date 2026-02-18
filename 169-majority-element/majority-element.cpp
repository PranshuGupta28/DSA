class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = 0;
        int count = 0;

        for(int num : nums) {
            if(count == 0) {
                candidate = num;
            }

            if(num == candidate)
                count++;
            else
                count--;
        }

        return candidate;

    }
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


};