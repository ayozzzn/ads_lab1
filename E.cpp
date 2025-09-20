#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> Boris;
    deque<int> Nursik;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        Boris.push_back(n);
    }
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        Nursik.push_back(n);
    }
    int moves = 0;
    int end = 1000000;
    while (!Boris.empty() and !Nursik.empty() and moves < end) {
        int BorisCard = Boris.front();
        int NursikCard = Nursik.front();
        Boris.pop_front();
        Nursik.pop_front();
        if (BorisCard == 0 and NursikCard == 9) {
            Boris.push_back(BorisCard);
            Boris.push_back(NursikCard);
        } else if (BorisCard == 9 and NursikCard == 0) {
            Nursik.push_back(BorisCard);
            Nursik.push_back(NursikCard);
        } else if (BorisCard > NursikCard) {
            Boris.push_back(BorisCard);
            Boris.push_back(NursikCard);
        } else {
            Nursik.push_back(BorisCard);
            Nursik.push_back(NursikCard);
        }
        moves++;
    }
    if (Boris.empty()) {
        cout << "Nursik" << " " << moves;
    } else if (Nursik.empty()) {
        cout << "Boris" << " " << moves;
    } else {
        cout << "blin nichya" << endl;
    }

    return 0;
}