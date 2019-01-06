#include <iostream>
#include <string>

struct pizza {
    std::string company;
    int radius;
};

int main() {

  pizza *pointer = new pizza;  // pointer to new struct temp

  std::cout << "insert company and radius" << std::endl;
  std::cin >> pointer -> company;  // get company name
  std::cin >> pointer -> radius;  // get radius

  std::cout << "company: " << pointer -> company << std::endl;
  std::cout << "radious: " << pointer -> radius << std::endl;




    return 0;
}