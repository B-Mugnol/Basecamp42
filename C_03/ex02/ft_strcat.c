char	*ft_strcat(char *dest, char *src)
{
	char	*c;

	c = dest;
	while (*c != '\0')
		c++;
	while (*src != '\0')
	{
		*c = *src;
		src++;
		c++;
	}
	*c = '\0';
	return (dest);
}
