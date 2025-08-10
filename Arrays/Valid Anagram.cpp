#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {

      sort(begin(s), end(s));
      sort(begin(t), end(t));

        return t == s ;
}

int main() {
    cout << isAnagram("abc", "cab");
}
