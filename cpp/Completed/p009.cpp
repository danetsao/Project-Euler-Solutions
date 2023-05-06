#include <iostream>

bool satisfyPT(int a, int b, int c) {
    if (a+b+c!=1000) return false;
    return (((a*a + b*b) == (c*c)) && (a < b < c));
}

int main() {
    for (int a = 0; a <= 1000; ++a) {
        for (int b = 0; b <= 1000; ++b) {
            for (int c = 0; c <= 1000; ++c) {
                if (satisfyPT(a, b, c)) {
                    std::cout << "a: " << a << "b: " << b << "c: " << c << std::endl;
                    std::cout << "sum: " << a*b*c << std::endl;
                }
            }
        }

    }
    return 0;
}