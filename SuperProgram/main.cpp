// SuperProgram.cpp : Defines the entry point for the application.
//

#include "io.hpp"
#include "math.hpp"
#include <iostream>

int main()
{
  auto numbers = getNumbers();
  std::cout << addNumbers(numbers) << std::endl;
}
