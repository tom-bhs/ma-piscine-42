/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:02:50 by hbouchel          #+#    #+#             */
/*   Updated: 2023/08/28 22:02:55 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

int	get_final_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	tab = (char *)malloc(get_final_size(size, strs, sep));
	if (!tab)
		return (NULL);
	tab[0] = '\0';
	if (size == 0)
		return (tab);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		i++;
		if (i != size)
			ft_strcat(tab, sep);
	}
	return (tab);
}
/*
int	main(void)
{
	char	*strs[] = {"Habbie", "Bouchelaghem", "21 ans"};
	char	sep[] = "//";
	int	taillestrs;

	taillestrs = 3;
	printf ("%s\n", ft_strjoin(taillestrs, strs, sep));
	return (0);
}*/
