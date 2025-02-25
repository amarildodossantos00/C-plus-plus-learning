#include <iostream>
#include <vector>

int main(void)
{
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

  int par = 0;
  int impar = 1;
  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] % 2 == 0)
      par += numbers[i];
    else
      impar *= numbers[i];
  }
  std::cout << "Sum of even numbers is " << par << "\n" << "Product of odd numbers is " << impar << "\n";
}
