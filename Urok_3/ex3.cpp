#include <iostream>
#include <vector>
using namespace std;

int input_1() {
  vector<int> a(3);
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  return a[0] + a[1] * 60 + a[2] * 3600;
}

int main() {
  int a = input_1();
  int b = input_1();
  cout << b - a << endl;
}
