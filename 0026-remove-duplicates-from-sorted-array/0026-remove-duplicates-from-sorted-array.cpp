class Solution {
public:
  
      int removeDuplicates(vector<int>& nums) {
     if (nums.empty()) return 0;
    
    int i = 0; // Slow pointer for unique elements
    for (int j = 1; j < nums.size(); j++) { // Fast pointer
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1; // New length
}
};