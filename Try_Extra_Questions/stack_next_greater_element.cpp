#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> NGE(vector<int> &arr) {
    int n = arr.size();
    vector<int> res(n, -1);
    stack<int>stack;

    for (int i = n - 1; i >= 0; i--) {

        while (!stack.empty() && stack.top() <= arr[i]) {
            stack.pop();
        }

        if (!stack.empty()) {
            res[i] = stk.top();
        }
        stack.push(arr[i]);
    }

    return res;
}

int main() {

    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> res = NGE(arr);

    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}
