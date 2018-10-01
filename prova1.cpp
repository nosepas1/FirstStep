#include <iostream>
using namespace std;

int main (){
  int n1,n2;
  int *p1; int *p2;
  cout << "Entra dos valors: ";
  cin >> n1 >> n2;
  p1 = &n1;
  p2 = &n2;
  cout << p1 << " " << p2;
  return 0;
}
