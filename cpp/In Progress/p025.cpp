#include <iostream>
#include <cmath>

int main() {
    double a = 1;
    double b = 1;
    int count = 2;

    while (std::log10(b) <= 1000) {
        std::cout << b << std::endl;
        double tmp = b;
        b = a + b;
        a = tmp;
        count++;
    }

    std::cout << "Result: " << count << std::endl;

    return 0;
}
