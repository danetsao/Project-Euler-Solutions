#include <iostream>
#include <string> 


int main() {
    int res = 0;
    int other = 0;
    for (int j = 1; j <= 100; ++j) {
        res = res + j*j;
        other = other + j;
    }

    std::cout << (other*other)-res << std::endl;
    return 0;
}