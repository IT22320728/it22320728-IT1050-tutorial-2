#include <iostream>
using namespace std;

int main()

{
  float cm, inch;

  cout << "Enter a length in cm : ;
  cin >> cm;

  inch = cm / 2.54;

  cout << "Length in inches is " << inch << endl;

  return 0;
}