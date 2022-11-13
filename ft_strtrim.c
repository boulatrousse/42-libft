/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:08:22 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/10 13:32:20 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_forward(char const *s, char const *set)
{
	int		i;
	int		j;
	int		count;
	char	*str;

	i = 0;
	j = 0;
	count = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (str[i] == set[j])
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
	return (&str[count]);
}

char	*ft_backward(char *s, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = ft_strlen(s) - 1;
	j = 0;
	count = i;
	while (i > 0)
	{
		while (set[j] != '\0')
		{
			if (s[i] == set[j])
			{
				i--;
				count--;
				j = 0;
			}
			else
				j++;
		}
		i--;
	}
	s[count + 1] = '\0';
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	char	*str;
	char	*str2;

	x = 0;
	str = ft_forward(s1, set);
	str = ft_backward(str, set);
	str2 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (str2 == NULL)
		return (0);
	while (str[x] != '\0')
	{
		str2[x] = str[x];
		x++;
	}
	str2[x] = '\0';
	return (str2);
}
