#include <iostream>
#include <vector>

using namespace std;

int NUM = 5;
void calc(int& res, int cur, int count, int incr, int ultCount) {
    if (ultCount > NUM) return;
    if (count > 3) {
        incr += 2;
        calc(res, cur, 0, incr, ultCount);
        return;
    }
    cout << "cur: " << cur << " res: " << res << endl;
    cur+=incr;
    res+=cur;
    ultCount++;
    count++;
    calc(res, cur, count, incr, ultCount);
}

int main() {
    int res = 1;
    calc(res, 3, 0, 2, 0);
    cout << res << endl;
    return 0;
}