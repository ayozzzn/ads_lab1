#include <iostream>
#include <deque>
using namespace std;

int main() {
    char c;
    int n;
    deque<int> dq;
    while (cin >> c) {
        if (c == '!') break;
        if (c == '+' or c == '-') {
            cin >> n;
        }
        if (c == '+') {
            dq.push_front(n);
        }
        else if (c == '-') {
            dq.push_back(n);
        }
        else if (c == '*') {
            if (dq.empty()) {
                cout << "error" << endl;
            } else {
                int sum = dq.front() + dq.back();
                cout << sum << endl;
                if (dq.size() == 1) {
                    dq.pop_front();
                } else {
                    dq.pop_front();
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}