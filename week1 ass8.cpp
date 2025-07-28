#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string str) {
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str[left] != str[right])
                return false;
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution ob;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    if (ob.isPalindrome(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
