#include <iostream>
int main() {
    int res = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) res = res+i;
    }
    std::cout << res << std::endl;
    return 0;
}