#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string reverseString(string str) {
        int left = 0, right = str.length() - 1;
        while (left < right) {
            swap(str[left], str[right]);
            left++;
            right--;
        }
        return str;
    }
};
int main() {
    Solution ob;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    string reversed = ob.reverseString(s);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
