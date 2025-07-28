#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int index = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[index++] = arr[i];
            }
        }

        while (index < n) {
            arr[index++] = 0;
        }
    }
};

int main() {
    Solution sol;

    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};

    sol.pushZerosToEnd(arr);

    cout << "Output: [";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
