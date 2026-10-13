class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> map;  // To store the value and its index
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];  // Find the complement that adds to target
            
            // Check if complement exists in the map
            if (map.find(complement) != map.end()) {
                // If found, return the indices of the two numbers
                return {map[complement], i};
            }
            
            // Otherwise, add the current number and its index to the map
            map[nums[i]] = i;
        }
        
        return {};  // Return empty vector if no solution found (shouldn't happen in valid input)
    }
};