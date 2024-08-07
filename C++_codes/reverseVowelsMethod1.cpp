#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string sub_s;
        for (char c:s)
        {

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                sub_s += c;
            }
        }
        int length = sub_s.size();
        int j=1;
        for (int i = 0; i < (s.size()); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                 s[i]=sub_s[length-j];
                 j++;
            }
        }
        return s;
    }
};

int main() {
    Solution s;
    string a = s.reverseVowels("hEllo");
    cout << a;
    return 0;
}
