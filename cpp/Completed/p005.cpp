#include <iostream>
#include <string> 


bool isDivisibleByAll(int cur) {
    for (int i = 1; i <= 20; ++i) {
        if (cur%i != 0) return false;
    }
    return true;
}

int main() {
    int res = -1;
    for (int j = 1; j < 9999999999999; ++j) {
        if (isDivisibleByAll(j)) {
            res = j;
            break;
        }
    }
    std::cout << res << std::endl;
    return 0;
}