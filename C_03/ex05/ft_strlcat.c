unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_size;
	unsigned int	dest_len;
	char			*p_dest;
	char			*p_src;

	p_dest = dest;
	p_src = src;
	i_size = size;
	while (i_size-- != 0 && *p_dest != '\0')
		p_dest++;
	dest_len = p_dest - dest;
	i_size = size - dest_len;
	if (i_size == 0)
		return (dest_len + ft_strlen(src));
	while (*p_src != '\0')
	{
		if (i_size != 1)
		{
			*p_dest++ = *p_src;
			i_size--;
		}
		p_src++;
	}
	*p_dest = '\0';
	return (dest_len + (p_src - src));
}
