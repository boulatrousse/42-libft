/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:08:22 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/14 11:00:13 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_forward(char const *s, char const *set)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s[i] == set[j])
			{
				i++;
				count++;
				j = 0;
			}
			else
				j++;
		}
		i++;
	}
	if (count == (int)ft_strlen(s))
		count = 0;
	return (count);
}

int	ft_backward(char const *s, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = ft_strlen(s) - 1;
	j = 0;
	count = i;
	while (i >= 0)
	{
		while (set[j])
		{
			if (s[i] == set[j])
			{
				count--;
				i--;
				j = 0;
			}
			else
				j++;
		}
		i--;
	}
	if (count == (int)ft_strlen(s))
		count = 0;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		y;
	int		z;
	char	*str;

	if (!s1)
		return (NULL);
	y = ((ft_backward(s1, set) - ft_forward(s1, set)) + 1);
	z = ft_forward(s1, set);
	str = malloc((sizeof(char) * y) + 1);
	if (str == NULL)
		return (0);
	str = ft_memcpy(str, s1 + z, y);
	str[y] = '\0';
	return (str);
}
