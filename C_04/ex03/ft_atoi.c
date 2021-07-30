int	ft_atoi(char *str)
{
	int	minus_count;
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	minus_count = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	if (minus_count % 2)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + *str - '0';
		str++;
	}
	return (num * sign);
}
