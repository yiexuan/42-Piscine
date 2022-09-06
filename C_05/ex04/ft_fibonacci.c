int	ft_fibonacci(int index)
{
	int	n;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (n);
	}
	else
		return (-1);
}
