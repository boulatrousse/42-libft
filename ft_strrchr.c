/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:38:34 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/14 08:57:59 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		x;
	char	b;
	char	*s;

	x = ft_strlen(str) - 1;
	b = c;
	s = (char *)str;
	while (s[x])
	{
		if (b == '\0')
			return (&s[x + 1]);
		else if (s[x] == b)
			return (&s[x]);
		else
			x--;
	}
	return (0);
}
