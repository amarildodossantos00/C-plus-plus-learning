#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num)
{
  int i = 1;
  int res = 1;
  while (i <= 10)
  {
    res *= num;
    i++;
  }
  return res;
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}
