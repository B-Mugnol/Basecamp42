int	is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_new_word(char curr, char prev)
{
	if (is_alphanumeric(curr) && !is_alphanumeric(prev))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	prev_c;

	if (*str == '\0')
		return (str);
	if (is_lowercase(*str))
		*str = *str - 32;
	i = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		prev_c = str[i - 1];
		if (is_new_word(c, prev_c) && is_lowercase(c))
			str[i] = str[i] - 32;
		else if (!is_new_word(c, prev_c) && is_uppercase(c))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
