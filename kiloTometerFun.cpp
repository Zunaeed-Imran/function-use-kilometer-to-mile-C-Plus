#include <iostream>
using namespace std;

float mile(float kilo, float m) {
   float result;
  result = kilo * 0.621371;
    return result;
}


int main () {
  float kilo, m;

  cout << "Enter Kilometer: ";
  cin >> kilo;

  cout << mile(kilo, m);
  return 0;
}