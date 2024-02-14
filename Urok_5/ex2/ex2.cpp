#include <iostream>
#include <string>
#include <list>

using namespace std;

int min_number(list <int> s){
  int g = 0;
  for (int i : s){
    g = min( g, i);
  }
  cout<<"g"<<g<<endl;
  return g;
}


int poverka_on_slova(const string& u) {
    int s = 0, l = 0, o = 0, n = 0, y = 0, k = 0;
    for (char t : u) {
      cout<<"t"<<t<<endl;
      switch (t) {
        case 's': ++s; break;
        case 'l': ++l; break;
        case 'o': ++o; break;
        case 'n': ++n; break;
        case 'y': ++y; break;
        case 'k': ++k; break;
      }
    }
    // Sum counts (adjust based on intended logic)
    return min_number({s, l, o, n, y, k});
}


int main(){
  string u;
  int result = 0, n1 = 0;
  cin>>u;
  cin>>n1;
  int kl = size(u) / n1 + 2;
  cout<<"kl"<<kl<<endl;
  for (int l = 1; l < kl; l++){
    cout<<"result"<<result<<endl;
    cout<<n1 * (l - 1)<<"   "<<n1 * l<<endl;
    result = result + poverka_on_slova(u.substr(n1 * (l - 1), n1 * l));
  }
  cout<<result<<endl;
}
