#include <iostream>
using namespace std;
int main() {
  int low, high, i;
  bool is_prime = true;
  cout << "Enter two numbers (intervals): ";
  cin >> low >> high;
  cout << "\ncomposite numbers between " << low << " and " << high << " are: " << endl;
  while (low < high) {
    is_prime = false;
    if (low == 2 ) {
      is_prime = true;
    }
    for (i = 2; i <= low/2; ++i) {
      if (low % i == 0) {
        is_prime = true;
        break;
      }
    }
    if (is_prime)
      cout << low << ", ";
    ++low;
  }
  return 0;
}
