#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> frequencyCount(vector<int>& arr, int n) {
        vector<int> freq(n, 0); // Initialize frequency array with 0

        for (int i = 0; i < n; i++) {
            if (arr[i] >= 1 && arr[i] <= n) {
                freq[arr[i] - 1]++;
            }
        }

        return freq;
    }
};

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array (values from 1 to n): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> result = obj.frequencyCount(arr, n);

    cout << "Frequencies of numbers from 1 to " << n << ": ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
