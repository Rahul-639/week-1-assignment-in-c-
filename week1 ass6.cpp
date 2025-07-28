#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {10, 20, 30, 40, 50};

    if (sol.isSorted(arr)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
