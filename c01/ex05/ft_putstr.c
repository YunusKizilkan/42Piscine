/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:44:05 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/01 19:44:13 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i],1);
		i++;
	}
}

int main()
{
	char *str = "yunus";
	ft_putstr(str);
	return 0;
}