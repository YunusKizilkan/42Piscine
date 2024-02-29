#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*res;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	res = malloc(sizeof(int) * size);
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (size);
}
