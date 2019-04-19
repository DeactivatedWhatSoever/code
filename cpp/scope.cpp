#include <iostream>
using namespace std;

void MultiplyNumbers()
{
  cout << "Enter the first number: ";
  int firstNumber = 0;
  cin >> firstNumber;
  cout << "Enter the second number: ";
  int secondNumber = 0;
  cin >> secondNumber;

  int multiplicationResult = firstNumber * secondNumber;
  cout << firstNumber << " x " << secondNumber;
  cout << " = " << multiplicationResult << endl;
}

int main()
{
  cout << "This program will help you multiply two numbers" << endl;
  MultiplyNumbers();
  // Uncomment these and the program will fail due to
  // scope issues.
  // cout << firstNumber << " x " << secondNumber;
  // cout << " = " << multiplicationResult << endl;
  return 0;
}

