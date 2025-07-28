#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {9, 8, 7, 6, 4, 2, 1, 3};

    sol.rotate(arr);

    cout << "Rotated Array: [";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
