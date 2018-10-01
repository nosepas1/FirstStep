#include <iostream>
using namespace std;

int sum(int* p1, int* p2){
  int suma = *p1 + *p2;
  return suma;

int multipli(int* p1, int* p2){
  int mult = *p1 * *p2;
  return mult;
}

int div(int* p1, int* p2){
  int division = *p1 / *p1;
  return division;
}
}
int main (){
  int n1, n2;
  cout << "Entra dos valors: ";
  cin >> n1 >> n2;
  int sumar = sum(&n1, &n2);
  cout << sumar;
  return 0;
}
