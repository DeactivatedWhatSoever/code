#include <iostream>


int main(void)
{
  // This lets you not use the entire std namespace
  // Just use the ones that you want!
  // No `namespace` keyword anymore!
  using std::cout;
  using std::endl;
  cout << "Hello World" << endl;
  return 0;
}

