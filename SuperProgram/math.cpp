#include <vector>

int addNumbers(std::vector<int> const& numbers) {
  int sum = 0;
  for (std::size_t i = 0; i < numbers.size(); ++i) {
    sum += numbers[i];
  }
  return sum;
}
