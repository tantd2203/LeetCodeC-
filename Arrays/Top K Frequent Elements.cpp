#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k) {
    map<int, int> freq;
    vector<int> res;
    // count frequency
    for ( int num: nums ) {
        freq[num]++;  // simpler way, auto-initializes to 0 then increments
    }
    // Step 2: Move into vector of pairs (num, count)
    vector<pair<int, int>> freqVec(freq.begin(), freq.end());

    // Step 3: Sort by count (descending)
    sort(freqVec.begin(), freqVec.end(),
         [](const pair<int,int> &a, const pair<int,int> &b) {
             return a.second > b.second;
         });

    // Step 4: Take top K elements
    for (int i = 0; i < k && i < (int)freqVec.size(); i++) {
        res.push_back(freqVec[i].first);
    }

    return res;
}
    int main() {
        vector<int> nums = {1, 1, 1, 2, 2, 3};
        int k = 2;

        vector<int> result = topKFrequent(nums, k);

        cout << "Numbers appearing at least " << k << " times: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;

        return 0;

}
