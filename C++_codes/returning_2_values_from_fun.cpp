#include<iostream>
#include<tuple>
#include<array>
#include<vector>
using namespace std;

void type1(string& s1, string& s2) // method 1 by reference
{
    string str1 = "hello";
    string str2 = "world";

    s1 = str1;
    s2 = str2;
}

void type2(string* s1, string* s2) // method 2 by pointer
{
    string str1 = "hello";
    string str2 = "world";

    *s1 = str1;
    *s2 = str2;
}

tuple<string, string> type3(void) // method 3 by using tuple
{
    string str1 = "hello";
    string str2 = "world";
    return make_tuple(str1, str2);
}

array<string, 2> type4(void) // method 4 by using array
{
    string str1 = "hello";
    string str2 = "world";
    return { str1, str2 };
}

vector<string> type5(void) // method 5 by using vector
{
    string str1 = "hello";
    string str2 = "world";
    return { str1, str2 };
}

int main()
{
    // method 1
    string s1, s2;
    type1(s1, s2);
    cout << "this is type1 = " << s1 << " " << s2 << endl;

    // method 2
    type2(&s1, &s2);
    cout << "this is type2 = " << s1 << " " << s2 << endl;

    // method 3
    tie(s1, s2) = type3();
    cout << "this is type3 = " << s1 << " " << s2 << endl;

    // method 4
    array<string, 2> arr = type4();
    s1 = arr[0];
    s2 = arr[1];
    cout << "this is type4 = " << s1 << " " << s2 << endl;

    // method 5
    vector<string> vec = type5();
    s1 = vec[0];
    s2 = vec[1];
    cout << "this is type5 = " << s1 << " " << s2 << endl;

    return 0;
}
// Method 1 & 2 are more memory efficient from other methods