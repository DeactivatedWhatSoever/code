#include <iostream>
#include <string>

using namespace std;

int main()
{
  string greetString = "Hello std::string!";
  cout << greetString << endl;

  cout << "Enter a line of text: ";
  string firstLine;
  getline(cin, firstLine);

  cout << "Enter another: ";
  string secondLine;
  getline(cin, secondLine);

  cout << "Result of concatenation: " << endl;
  string concatString = firstLine + " " + secondLine;
  cout << concatString << endl;

  cout << "Copy of concatenated string: ";
  string aCopy;
  aCopy = concatString;
  cout << aCopy << endl;

  cout << "Length of concat string: " << concatString.length() << endl;

  return 0;
}

