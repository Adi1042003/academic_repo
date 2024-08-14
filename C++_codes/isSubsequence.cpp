#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.size();
    }
};


int main() {
	string s = "hello";
    string t = "hello";
	Solution sol;
	auto a = sol.isSubsequence(s,t);
	cout << a << " ";
}
