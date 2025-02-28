#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num)
{
  int i = 1;
  int aux = num;
  std::vector<int> res;
  res.push_back(num);
  while (i < 3)
  {
    num += aux;
    res.push_back(num);
    i++;
  }
  return res;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
