#include <iostream>

int main(void)
{
  double tempf = 38;
  double tempc = (tempf - 32) / 1.8;

  std::cout << "The temp is " << tempc << " degrees Celsius." << "\n";
}
