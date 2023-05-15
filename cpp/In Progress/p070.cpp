#include <iostream>




int gcd(int a, int b) { // euclids method, src "https://stackoverflow.com/questions/28575416/how-to-find-out-if-two-numbers-are-relatively-prime"
    int t;
    if(b < a) {
        t = b;
        b = a;
        a = t;
    }
    while(b != 0){
        t = a;
        a = b;
        b = t%b;
    }
    return a;
}
int is_relatively_prime(int x, int num) {
    return gcd(x, num) == 1;
}

int phi_function(long x) { 
    /** determine the number of positive numbers less than or 
    *equal to n which are relatively prime to n
    */
   int count = 0;
   for (long i = 0; i < x; i++) {
    if (is_relatively_prime(i, x)) count++; 
   }
   return count;
}
int ratio(long x) { //returns n/φ(n)
    return x / phi_function(x);
}
int main() {
    int cur, res = ratio(2);
    for (long i = 0; i < 1000000; ++i) { //10^7
        std::cout << i/1000000 << "%" << std::endl; 
        cur = ratio(i);
        if (cur < res) res = cur;
    }
    return res;
}
