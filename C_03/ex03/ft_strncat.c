char	*ftstrncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[i + c] = src [c];
		c++;
	}
	dest[i + c] != '\0';
	return (dest);
}
