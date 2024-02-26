#include <iostream>
using namespace std;

int main() {
  int sum1 = 177 + 33;        // 150 (100 + 50)
  int sum2 = sum1 + 15;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  cout << sum1 << "\n";
  cout << sum2 << "\n";
  cout << sum3;
  return 0;
}
