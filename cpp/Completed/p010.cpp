#include <iostream>

bool isPrime(int input_num) {
    bool flag = true;
    for (int i = 2; i <= input_num/2; ++i) {
        if (input_num % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    unsigned long long res = 0;
    for (int i = 2; i < 2000000; ++i) {
        if (isPrime(i)) {
            res = res+i;
            std::cout << i << std::endl;
        }
    }
    std::cout << res << std::endl;
    return 0;
}