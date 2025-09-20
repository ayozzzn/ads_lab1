#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int NthPrime(int n) {
    if (n < 0) return -1;
    if (n == 1) return 2;
    int count = 1;
    int number = 3;
    while (count < n) {
        if (isPrime(number)) {
            count++;
            if (count == n) break;
        }
        number += 2;
    }
    return number;
}


int main() {
    int n;
    cin >> n;
    int result = NthPrime(n);
    cout << result;
    return 0;
}