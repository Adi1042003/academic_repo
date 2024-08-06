#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int addMinimum(string& word) {
        int insertions = 0;
        int i = 0;
        int n = word.size();

        int index = 0; // 0 -> 'a', 1 -> 'b', 2 -> 'c'

        for (int j = 0; j < n; ++j) {
            char c = word[j];
            while (c != "abc"[index]) {
                insertions++;
                index = (index + 1) % 3;
            }

            index = (index + 1) % 3;
        }

        while (index != 0) {
            insertions++;
            index = (index + 1) % 3;
        }

        return insertions;
    }
};

int main() {
    Solution s;
    string word1 = "b";
    cout << s.addMinimum(word1) << endl; // Output required: 2

    string word2 = "aaa";
    cout << s.addMinimum(word2) << endl; // Output     "   : 6

    string word3 = "aaaabb";
    cout << s.addMinimum(word3) << endl; // Output     "   : 9

    return 0;
}
