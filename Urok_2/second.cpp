#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    int min_members = (y - x - 1) / 2 + 2;

    if (x == y - 1) {
        min_members = (y - x) / 2 + 1;
    }

    std::cout << min_members << std::endl;

    return 0;
}