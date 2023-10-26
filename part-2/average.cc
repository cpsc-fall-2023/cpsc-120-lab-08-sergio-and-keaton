// Keaton Karpp
// kkarpp@csu.fullerton.edu
// @kkarpp
// Partners: @svale231

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (argc < 2) {
    std::cout << "Error: Please enter more than one argument\n";
    return 1;
  }
  double sum{0};
  for (int counter{1}; counter < argc; counter++) {
    sum = sum + stod(arguments.at(counter));
  }
  std::cout << sum << "\n";
  sum = (sum / (argc - 1));
  std::cout << "average = " << sum << "\n";
  return 0;
}