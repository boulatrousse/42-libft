/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:37:14 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/14 15:12:02 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	b;
	char	*s;

	i = 0;
	b = c;
	s = (char *)str;
	if (s == 0)
		return (s);
	while (str[i] != '\0')
	{
		if (str[i] == b)
			return (&s[i]);
		else
			i++;
	}
	if ((str[i] == '\0') && (b == '\0'))
		return (&s[i]);
	else
		return (0);
}
