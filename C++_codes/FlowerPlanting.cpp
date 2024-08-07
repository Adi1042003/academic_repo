#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;  // To keep track of flowers that can be planted
        int size = flowerbed.size();

        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0) {
                // Check if the previous and next plots are empty or if they are at the boundary
                bool emptyPrev = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyNext = (i == size - 1) || (flowerbed[i + 1] == 0);

                if (emptyPrev && emptyNext) {
                    // Plant a flower here
                    flowerbed[i] = 1;
                    ++count;

                    // Skip the next plot since we can't plant adjacent flowers
                    i++;
                }
            }
            // Check if we have planted enough flowers
            if (count >= n) {
                return true;
            }
        }
        return count >= n;
    }
};

int main() {
    Solution s;

    vector<int> flowerbed1 = { 1, 0, 0, 0, 1 };
    int n1 = 1;
    cout << boolalpha << s.canPlaceFlowers(flowerbed1, n1) << endl;  // Expected output: true

    vector<int> flowerbed2 = { 1, 0, 0, 0, 1 };
    int n2 = 2;
    cout << boolalpha << s.canPlaceFlowers(flowerbed2, n2) << endl;  // Expected output: false

    vector<int> flowerbed3 = { 1, 0, 0, 0, 0, 0, 1 };
    int n3 = 2;
    cout << boolalpha << s.canPlaceFlowers(flowerbed3, n3) << endl;  // Expected output: true

    return 0;
}
