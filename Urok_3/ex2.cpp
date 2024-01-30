#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<(a%1440-a%60)/60<<"\n"<<a%60<<"\n";
}
