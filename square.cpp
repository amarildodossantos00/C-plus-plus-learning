#include <iostream>

int main(void)
{
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  while (i <= 9)
  {
    square = i * i;
    std::cout << i << "   " << square << "\n";
    i++;
  }
  return (0);
}
