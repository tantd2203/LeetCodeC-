#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;


vector<vector<string> > groupAnagrams(vector<string> &strs) {
    map<string, vector<string> > groups;
    for (string &str: strs) {
        string key = str;
        sort(key.begin(), key.end());
        groups[key].push_back(str);
    }
    vector<vector<string> > result;
    for (auto &entry: groups) {
        result.push_back(entry.second);
    }
    return result;
}

int main() {
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto result = groupAnagrams(words);

    for (auto &group: result) {
        for (auto &word: group) {
            cout << word << " ";
        }
        cout << "\n";
    }

    return 0;
}
