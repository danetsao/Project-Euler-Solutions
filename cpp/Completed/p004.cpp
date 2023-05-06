#include <iostream>
#include <string> 


bool isPalindrome(int cur) {
    std::string b = std::to_string(cur);
    int l = 0, r = b.size()-1;
    while (l < r) {
        if (b[l] != b[r]) return false;
        l++; r--;
    }
    return true;
}

int main() {
    int cur, curRes = -1;
    for (int j = 0; j < 1000; ++j) {
        for (int i = 0; i < 1000; ++i) {
            cur = i*j;
            if (cur > curRes && isPalindrome(cur)) {
                curRes = cur;
            } 
        }
    }
    std::cout << curRes << std::endl;
    return 0;
}