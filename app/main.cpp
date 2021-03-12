
#include <iostream>
#include <stdlib.h>

#include "Foo.h"

int factorial(int n)
{
  unsigned int sum{1};
  for (int i = 1; i <= n; i++) {
    sum *= i;
  }
  return sum;
}

int main()
{
  std::cout << 5 << "! = " << factorial(5) << '\n';
  std::cout << 0 << "! = " << factorial(0) << '\n';
  std::cout << 9 << "! = " << factorial(9) << '\n';
  std::cout << 3 << "! = " << factorial(3) << '\n';
  
  return 0;
}
