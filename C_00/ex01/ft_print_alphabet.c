#include <unistd.h>

void	ft_put(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	letter;
	
	letter = 'a';
	while (letter <= 'z')
	{
	ft_put(letter);
	letter++;
	}
}
