#include <iostream>
int main() {
    int a = 0, b = 1;
    int res = 0, tmp;
    while (b < 4000000) {
        tmp = b;
        if (b % 2 == 0) res = res + b;
        b = a + b;
        a = tmp;
    } 
    std::cout << res << std::endl;
    return 0;
}