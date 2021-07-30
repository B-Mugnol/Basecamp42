unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && *src != '\0')
	{
		if (size == 0)
			break ;
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}
