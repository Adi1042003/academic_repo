#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string s1;
        string s2;
        for (char c : s)
        {   
            if (c == ' ')
            {
                if (!s1.empty()) {//verify for empty string and avoids extra space too
                    reverse(s1.begin(), s1.end());//make the word correct format  
                    if(!s2.empty())//avoid head or starting space
                             s2 += " ";
                    s2 += s1;//add correct format word
                    s1.clear();
                }
            }
            else
            {
                if(c != ' ')
                    s1 += c;
            }
        }
        // Add the last word if it exists
        if (!s1.empty()) {
            reverse(s1.begin(), s1.end());
            if (!s2.empty()) {
                s2 += " ";
            }
            s2 += s1;
        }
        return s2;
    }
};

int main() {
    Solution s;
    string a = s.reverseWords(" a good   example ");
    cout <<"starting -> |" << a<<"|<- ending";
    return 0;
}
