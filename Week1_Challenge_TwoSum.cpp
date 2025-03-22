#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;  // Map to store number and its index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                // If complement is found in map, return the pair of indices
                return {map[complement], i};
            }
            // Otherwise, store the current number and its index in the map
            map[nums[i]] = i;
        }
        return {}; // If no solution found (but the problem guarantees one solution)
    }
};
