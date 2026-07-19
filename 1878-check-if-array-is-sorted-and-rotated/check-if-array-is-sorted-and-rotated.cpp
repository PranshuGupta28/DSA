class Solution {
public:
    bool checkSorted(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

    bool check(vector<int>& nums) {        
       vector<int> ans(nums.size());
    for (int x = 0 ; x<nums.size();x++){
       for (int i = 0 ; i < nums.size();i++){  
        ans[(i+x)%(ans.size())] = nums[i];
        }       
     if (checkSorted(ans)==true){
        return true;
       }
    }
    return false;
    }
};