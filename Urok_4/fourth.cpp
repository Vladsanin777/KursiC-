#include <iostream>

using namespace std;

int main() {
    int i;
    cin >> i;
    int k = 2;
    while (i > k) {
        k = k * 2;
    }
    if (i == k) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
