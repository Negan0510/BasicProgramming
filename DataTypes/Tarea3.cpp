#include <iostream>
using namespace std;

int main() {
  int sum1 = 177 + 33;        // 210 (177 + 33)
  int sum2 = sum1 + 15;      // 225 (210 + 15)
  int sum3 = sum2 + sum2;     // 577 (177 + 400)
  cout << sum1 << "\n";
  cout << sum2 << "\n";
  cout << sum3;
  return 0;
}
