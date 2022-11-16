/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:08:22 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/16 17:35:27 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_forward(char const *s, char const *set, int a)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (set[a])
		{
			if (s[i] == set[a])
			{
				i++;
				count++;
				a = 0;
			}
			else
				a++;
		}
		if (i != (int)ft_strlen(s))
			i++;
	}
	if (count == (int)ft_strlen(s))
		count = 0;
	return (count);
}

static int	ft_backward(char const *s, char const *set)
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
			if (s[i] == set[j] && i != 0)
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

	if (!s1 || !set)
		return (NULL);
	y = ft_backward(s1, set) - ft_forward(s1, set, 0);
	z = ft_forward(s1, set, 0);
	if (y != 0)
	{
		y++;
		str = malloc((sizeof(char) * y) + 1);
		if (str == NULL)
			return (0);
		str = ft_memcpy(str, s1 + z, y);
	}
	else
	{
		str = malloc((sizeof(char) * 1));
		if (!str)
			return (NULL);
	}
	str[y] = '\0';
	return (str);
}
