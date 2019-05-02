#include <iostream>
using namespace std;

int main()
{
  char sayHello[] = { 'H', 'E', 'L', 'L', 'O', ' ', 'W', 'o', 'r', 'l', 'd', '\0' };
  cout << sayHello << endl;
  cout << "Size of array: " << sizeof(sayHello) << endl;

  cout << "Replacing space with null" << endl;
  sayHello[5] = '\0';
  cout << sayHello << endl;
  cout << "Size of array: " << sizeof(sayHello) << endl;

  return 0;
}

