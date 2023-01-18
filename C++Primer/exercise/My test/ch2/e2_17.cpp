#include <iostream>

using namespace std;

int main(){
  double i = 3.14;
  double *p = &i;
  double *p1 = p + 1;
  double **p2 = &p;
  double **p3 = &p1;

  cout << p << '\n' << *p1 << endl;
  cout << **p2 << '\n' << **p3 << endl;


  return 0;
}