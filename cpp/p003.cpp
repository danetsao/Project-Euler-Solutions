#include <iostream>
#include <gmp.h>

bool isPrime(mpz_class input_num) {
    for (mpz_class i = 2; i < input_num; ++i) {
        if (input_num%i == 0) return false;
    }
    return true;
}

int main() {
    mpz_class res = -1;
    mpz_class k("600851475143");
    for (mpz_class i = k; i >= 0; --i) {
        if (k%i == 0 && isPrime(i)) {
            res = i;
            break;
        }
    }
    std::cout << res << std::endl;
    return 0;
}