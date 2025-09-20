#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void process() {
    int n;
    cin >> n;
    vector<int> deck;
    for (int i = n; i >= 1; i--) {
        deck.insert(deck.begin(), i);
        int size = deck.size();
        int k = i % size;
        if (k > 0) {
            rotate(deck.begin(), deck.end() - k, deck.end());
        }
    }
    for (int card : deck) {
        cout << card << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        process();
    }
    return 0;
}
