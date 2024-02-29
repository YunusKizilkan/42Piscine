char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		s;

	i = 0;
	s = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (s == 1)
				str[i] -= 32;
			    s = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			s = 0;
		else
			s = 1;
		i++;
	}
	return (str);
}