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

int NthSuperPrime(int n) {
    int primeCount = 0;
    int superPrimeCount = 0;
    int number = 2;
    while (superPrimeCount < n) {
        if (isPrime(number)) {
            primeCount++;
            if (isPrime(primeCount)) {
                superPrimeCount++;
                if (superPrimeCount == n) {
                    return number;
                }
            }
        }
        number++;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int result = NthSuperPrime(n);
    cout << result << endl;
    return 0;
}