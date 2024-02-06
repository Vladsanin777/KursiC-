#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_interesting_permutation(int n) {
  if (n % 2 == 0) {
    return true;
  } else if (n % 3 == 0) {
    int sqrt_n = int(sqrt(n));
    return sqrt_n * sqrt_n != n;
  } else {
    return false;
  }
}

vector<int> generate_interesting_permutation(int n) {
  if (n % 2 == 0) {
    vector<int> permutation(n);
    for (int i = 0; i < n / 2; i++) {
      permutation[i] = 2 * i + 1;
      permutation[n / 2 + i] = 2 * i + 2;
    }
    return permutation;
  } else {
    int sqrt_n = int(sqrt(n));
    vector<int> permutation(n);
    for (int i = 0; i < sqrt_n; i++) {
      permutation[i] = i + 1;
    }
    for (int i = sqrt_n; i < n; i++) {
      permutation[i] = n - i;
    }
    return permutation;
  }
}

int main() {
  int n;
  cin >> n;

  if (is_interesting_permutation(n)) {
    cout << "ДА" << endl;
    for (int i = 0; i < n; i++) {
      cout << generate_interesting_permutation(n)[i] << " ";
    }
    cout << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
