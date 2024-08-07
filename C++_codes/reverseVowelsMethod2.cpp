#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string sub_s;
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            while ((l < r) && !isVowel(s[l])) l++;// Find the next vowel from the left
            while ((l < r) && !isVowel(s[r])) r--;// Find the next vowel from the right

            if (l < r)
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
    bool isVowel(char c)
    {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        
    }
};

int main() {
    Solution s;
    string a = s.reverseVowels("hEllo");
    cout << a;
    return 0;
}
