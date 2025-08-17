
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {

    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                return {map.at(complement), i};
            }
            map.insert({nums[i], i});
        }
        return {};
    }
};
