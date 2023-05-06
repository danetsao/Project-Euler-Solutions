#include <iostream>
#include <set>
#include <utility>


int calc(int i, int j, std::set<std::pair<int, int> >& s) {
    if (i > 20 || j > 20 || (s.find(std::make_pair(i, j)) != s.end())) return 0;
    s.insert(std::make_pair(i, j));
    std::cout << "i: " << i << " j: " << j << std::endl;
    return 1 + calc(i+1, j, s) + calc(i, j+1, s);
}

int main() {
    std::set<std::pair<int, int> > seen;
    int  res = calc(0, 0, seen);
    std::cout << "res: " << res<< std::endl;
    return 0;
}