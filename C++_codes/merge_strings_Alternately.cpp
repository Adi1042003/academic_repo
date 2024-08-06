#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string wrd;
        int i = 0;
        while (i < word1.size() || i < word2.size()) {
            if (i < word1.size()) {
                wrd += word1[i];
            }
            if (i < (unsigned) word2.size()) {
                wrd += word2[i];
            }
            i++;
        }
        return wrd;
    }
};

int main() {
    string wrd1 = "hello";
    string wrd2 = "world";

    Solution sl;
    string s = sl.mergeAlternately(wrd1, wrd2);
    cout << s << endl; // Output should be "hweolrllod"
}
