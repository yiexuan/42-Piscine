char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src [c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
