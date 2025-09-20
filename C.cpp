#include <iostream>
#include <stack>
#include <string>
using namespace std;

string Process(string s) {
    string result;
    stack<char> st;
    for (char c : s) {
        if (c == '#') {
            if (!st.empty()) {
                st.pop();
            }
        } else {
            st.push(c);
        }
    }
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    return result;
}

int main() {
    string FirstString, SecondString;
    cin >> FirstString >> SecondString;
    if (Process(FirstString) == Process(SecondString)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}