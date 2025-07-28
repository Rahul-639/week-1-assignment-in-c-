#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int secondLargest(vector<int> &arr) {
        int largest = -1;
        int second = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) {
                second = largest;
                largest = arr[i];
            } else if (arr[i] < largest && arr[i] > second) {
                second = arr[i];
            }
        }

        return second;
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    cout << "Second Largest: " << sol.secondLargest(arr1) << endl;  // Output: 34

    vector<int> arr2 = {10, 5, 10};
    cout << "Second Largest: " << sol.secondLargest(arr2) << endl;  // Output: 5

    vector<int> arr3 = {10, 10, 10};
    cout << "Second Largest: " << sol.secondLargest(arr3) << endl;  // Output: -1

    vector<int> arr4 = {1, 2};
    cout << "Second Largest: " << sol.secondLargest(arr4) << endl;  // Output: 1

    return 0;
}
