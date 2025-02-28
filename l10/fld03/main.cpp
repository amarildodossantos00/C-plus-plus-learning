 #include <iostream>

#include "coffee.hpp"

int main() {
  
  // coffee black
  std::cout << make_coffee(false, false);
  
  // coffee with milk
  std::cout << make_coffee(true);
  
  // coffee with milk and sugar
  std::cout << make_coffee();
  
  // coffee with sugar
  std::cout << make_coffee(false, true);
  
}
