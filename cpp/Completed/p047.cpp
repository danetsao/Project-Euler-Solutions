#include <iostream>

using namespace std;

int distinctPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (count >= 5) return count;
        if (n % i == 0) {
            count++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    return count;
}

int main() {
    int count = 0;
    for (int i = 2; i < 999999999999; i++) {
        if (distinctPrimeFactors(i) == 4) {
            if (distinctPrimeFactors(i + 1) == 4) {
                if (distinctPrimeFactors(i + 2) == 4) {
                    if (distinctPrimeFactors(i + 3) == 4) {
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}