#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commaspace(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_numbers(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;
	
	x = '0';
	while (x <= '9')
	{
		y = x + 1;
		while (y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_print_numbers(x , y, z);
				if (!(x == '7' && y == '8' && z == '9'))
				{
					ft_commaspace();
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
}			
