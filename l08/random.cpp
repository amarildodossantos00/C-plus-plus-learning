#include <iostream>

int main(void)
{
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  int the_amazing_random_number = rand() % 77;
  std::cout << the_amazing_random_number << "\n";
}
