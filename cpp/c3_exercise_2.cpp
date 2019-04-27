#include <iostream>
using namespace std;

int main()
{
  const float pi = 22.0 / 7;

  cout << "Enter radius: ";
  int radius = 1;
  cin >> radius;
  
  cout << "Area: " << radius * radius * pi << endl;
  cout << "Cicumference: " << 2 * pi * radius << endl; 
  return 0;
}

