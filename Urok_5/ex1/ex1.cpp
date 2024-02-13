#include <iostream>
#include <string>

using namespace std;

bool digit_or_number(char a){
  if (a == '0' || a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9'){
    return true;
  }
  return false;
}

int main(){
  string u;
  getline(cin, u, '\n');
  int f = 0;
  int t;
  int c;
  int p = 0;
  for (int i = 0; i < size(u); i++){
    t = u[i];
    if (digit_or_number(t)) {
      p = 1;
      c = t - '0';
      f = c + f;
    }
  }
  if (p != 0){
    cout<<f<<endl;
  }else{
    std::cout <<"no figures"<<endl;
  }
}
