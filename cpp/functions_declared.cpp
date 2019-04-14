#include <iostream>
using namespace std;

// Function declare, but the naming is a class! Is it right?
int DemoConsoleOutput();

int main()
{
  DemoConsoleOutput();
  return 0;
}

// Implementation of declared function
int DemoConsoleOutput()
{
  cout << "This is a simple string literal" << endl;
  cout << "Writing number five: " << 5 << endl;
  cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
  cout << "Pi when aproximated is 22 / 7 = " << 22 / 7 << endl;
  cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;
  return 0;
}

