/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:06:30 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/14 09:02:17 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*is_pos(int n, int i)
{
	int		x;
	int		y;
	char	*str;

	x = 0;
	y = i - 1;
	str = malloc(i * sizeof(char));
	if (str == NULL)
		return (0);
	while (x < y)
	{
		str[y - 1] = ((n % 10) + 48);
		n /= 10;
		y--;
	}
	str[i - 1] = '\0';
	return (str);
}

char	*is_neg(int n, int i)
{
	int		x;
	int		y;
	char	*str;

	x = 0;
	y = i - 1;
	n *= -1;
	str = malloc(i * sizeof(char));
	if (str == NULL)
		return (0);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (x < y)
	{
		str[y - 1] = ((n % 10) + 48);
		n /= 10;
		y--;
	}
	str[0] = '-';
	str[i - 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = count(n) + 1;
	if (n >= 0)
		str = is_pos(n, i);
	else
		str = is_neg(n, i);
	return (str);
}
