#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
    int n;
    string statements;
    cin >> n;
    cin >> statements;
    deque<int> SakayanagiFraction, KatsuragiFraction;
    for (int i = 0; i < n; i++) {
        if (statements[i] == 'S') {
            SakayanagiFraction.push_back(i);
        } else {
            KatsuragiFraction.push_back(i);
        }
    }
    while (!SakayanagiFraction.empty() and !KatsuragiFraction.empty()) {
        int sakayanagi = SakayanagiFraction.front();
        int katsuragi = KatsuragiFraction.front();
        SakayanagiFraction.pop_front();
        KatsuragiFraction.pop_front();
        if (sakayanagi < katsuragi) {
            SakayanagiFraction.push_back(sakayanagi + n);
        } else {
            KatsuragiFraction.push_back(katsuragi + n);
        }
    }
    if (!SakayanagiFraction.empty()) {
        cout << "SAKAYANAGI" << endl;
    } else {
        cout << "KATSURAGI" << endl;
    }
    return 0;
}