#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Recursive helper function to insert x at the bottom
    void insertBottom(stack<int>& st, int x) {
        if (st.empty()) {
            st.push(x);
            return;
        }

        int topElement = st.top();
        st.pop();

        insertBottom(st, x);  // Recursive call

        st.push(topElement);  // Push back the top element
    }

    stack<int> insertAtBottom(stack<int> st, int x) {
        insertBottom(st, x);
        return st;
    }
};

// Function to print stack from bottom to top
void printStack(stack<int> st) {
    vector<int> temp;
    while (!st.empty()) {
        temp.push_back(st.top());
        st.pop();
    }
    reverse(temp.begin(), temp.end());
    cout << "{";
    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i];
        if (i != temp.size() - 1) cout << ",";
    }
    cout << "}" << endl;
}

int main() {
    Solution sol;

    // Example 1
    stack<int> st1;
    vector<int> values1 = {8, 1, 2, 3, 4}; // Top to Bottom
    for (int val : values1) st1.push(val);
    int x1 = 2;
    stack<int> result1 = sol.insertAtBottom(st1, x1);
    cout << "Output 1: ";
    printStack(result1); // Should print {2,4,3,2,1,8}

    // Example 2
    stack<int> st2;
    vector<int> values2 = {1, 3, 5}; // Top to Bottom
    for (int val : values2) st2.push(val);
    int x2 = 4;
    stack<int> result2 = sol.insertAtBottom(st2, x2);
    cout << "Output 2: ";
    printStack(result2); // Should print {4,5,3,1}

    return 0;
}
