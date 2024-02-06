#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << "YES" << endl;
    return 0;
  } else if (n % 2 == 0) {
    while (n % 2 == 0) {
      n /= 2;
    }
    if (n == 1) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
