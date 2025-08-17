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




