#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;


bool hasDuplidcate(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }
    return false;
}

bool hasDuplicate(vector<int> &nums) {
    set<int>  seen;
    for (int  i :  nums) {
        if ( seen.count(i)) {
            return true;
        }
        seen.insert(i);
    }
    return false;
}

int main() {
    vector<int> nums  = { 1, 2, 3, 3 };
    vector<int> nums2 = { 1, 2, 3, 4 };
    hasDuplidcate(nums);

    return 0;
}


