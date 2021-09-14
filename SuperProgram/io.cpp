#include <vector>
#include <iostream>

std::vector<int> getNumbers() {
  int number;
  std::vector<int> numbers;
  while (std::cin >> number) {
    numbers.push_back(number);
  }
  return numbers;
}