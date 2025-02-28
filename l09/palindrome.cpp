#include <iostream>

int	aux_strlen(std::string text)
{
	int	len = 0;
	while (text[len])
		len++;
	return (len);
}

bool	is_palindrome(std::string text)
{
	std::string aux(text);
	int	i = aux_strlen(text);
	int	a = 0;
	i--;
	while (i >= 0)
	{
		aux[a] = text[i];
		i--;
		a++;
	}
	if (aux == text)
		return (true);
	return false;
}

int	main(void)
{
	std::cout << is_palindrome("madam") << "\n";
	std::cout << is_palindrome("ada") << "\n";
	std::cout << is_palindrome("lovelace") << "\n";
	return (0);
}
