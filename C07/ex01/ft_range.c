/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 02:21:18 by hbouchel          #+#    #+#             */
/*   Updated: 2023/08/28 02:22:35 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		return (0);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min ++;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min
	tab = ft_range(min, max);
	while(i > size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
