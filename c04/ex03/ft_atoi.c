int	ft_atoi(char *str)
{
	int	i;
	int	sonuc;
	int	isaret;

	i = 0;
	sonuc = 0;
	isaret = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isaret = isaret * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sonuc = (sonuc * 10) + str[i] - '0';
		i++;
	}
	return (sonuc * isaret);
}
