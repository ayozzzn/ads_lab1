#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ages(n);
    for (int i = 0; i < n; i++) {
        cin >> ages[i];
    }
    vector<int> result(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() and ages[st.top()] > ages[i]) {
            st.pop();
        }
        if (!st.empty()) {
            result[i] = ages[st.top()];
        }
        st.push(i);
    }
    for (int n : result) {
        cout << n << " " ;
    }

    return 0;
}