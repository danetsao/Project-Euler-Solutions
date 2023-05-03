#include <iostream>

bool isPrime(int input_num) {
    for (int i = 2; i < input_num; ++i) {
        if (input_num%i == 0) return false;
    }
    return true;
}

int main() {
    int res;
    int primeCount = 0;
    for (int j = 1; j <= 99999999999; ++j) {
        if (isPrime(j)) {
            primeCount++;
            if (primeCount == 10002) {
                res = j;
                break;
            }
        }
    }

    std::cout << res << std::endl;
    return 0;
}