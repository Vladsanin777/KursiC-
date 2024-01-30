#include <iostream>

using namespace std;


int min_1(int a, int b){
  if(a < b){
    return a;
  }else{
    return b;
  }
}
int main() {
  int n, k;
  cin >> n >> k;

  // Находим наибольший общий делитель N и K.
  int gcd = 1;
  for (int i = 2; i <= min_1(n, k); i++) {
    if (n % i == 0 && k % i == 0) {
      gcd = i;
    }
  }

  // Вычисляем искомое количество поворотов.
  int rotations = n * k / gcd;

  cout << rotations << endl;

  return 0;
}
