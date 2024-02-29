#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char    *a;

	a = malloc(sizeof(strs));
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j]!= '\0')
		{
			a{k++} = strs[i][j++];
		}
		j = 0;
		while(sep[j] && i < (size - 1))
		{
			a{k++} = sep[j++];
		}
		i++;
	}
	a[k] = '\0';
	return (a);
}