#include <iostream>
#include <vector>

int main(void)
{
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Scarllet 2i2");
  grocery.push_back("Kimono Karma");

  std::cout << grocery.size() << "\n";
}
