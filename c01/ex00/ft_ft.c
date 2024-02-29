/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykizilka <ykizilka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:17:29 by ykizilka          #+#    #+#             */
/*   Updated: 2024/02/01 16:17:31 by ykizilka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main ()
{
	int num = 4;
	int *ptr = &num;
	
	printf("%d \n",*ptr); // eski hali 4 yazdırır
	
	ft_ft(ptr);
	printf("%d",*ptr); // 42 yazdırır

}
