/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:37:14 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/09 12:53:35 by lboulatr         ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		if ((str[i + 1] == '\0') && (b == '\0'))
			return (&s[i + 1]);
		else if (str[i] == b)
			return (&s[i]);
		else
			i++;
	}
	return (0);
}
