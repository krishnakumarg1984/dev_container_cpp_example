#include <iostream>
#include <string>

int main() {
  std::cout << "Hello World\n";
  std::cout << "Input: ";
  std::string data;
  std::getline(std::cin, data);
  std::cout << "Output: " << data << "\n\n";

  return 0;
}
