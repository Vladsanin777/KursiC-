#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int x, y;

    cout << "Enter the first number: ";
    cin >> x;

    cout << "Enter the second number: ";
    cin >> y;

    int l, a, b;
    l = gcd(100 - x, x);
    int a_1 = (100 - x / l);
    int a_2 = x / l;

    a = 0;
    b = 0;

    while (a * a_1 < b * a_2) {
        a++;
    }

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    while (a < b) {
        cout << a;
        cout << b;

        b++;
    }

    cout << a << endl;
    cout << b << endl;
    cout << a + b << endl;
}
