#include <iostream>

int main(void)
{
  int dog_age = 5;
  int early_years;
  int later_years;
  int human_years;

  //Os dois primeiros anos de vida de um cão conta como 21 anos humanos.
  early_years = 21;
  
  // Vamos tirar 2 porque já armazenamos o equivalente na variavel early_years e vamos multiplicar por 4 porque depois dos dois primeiros todos os restantes anos de um cao equivalem a 4 anos humanos
  later_years = (dog_age - 2) * 4;

  // E agora apenas precisamos somar os primeiros e os proximos
  human_years = early_years + later_years;
  std::cout << "My name is Tsantsa! Ruff ruff, I am " << human_years << " years old in human years." << "\n";
}
