#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxVal = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {1, 8, 7, 56, 90};
    cout << "Largest: " << sol.largest(arr1) << endl;

    vector<int> arr2 = {5, 5, 5, 5};
    cout << "Largest: " << sol.largest(arr2) << endl;

    vector<int> arr3 = {10};
    cout << "Largest: " << sol.largest(arr3) << endl;

    return 0;
}
