/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:34:30 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/09 12:53:24 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	b;
	unsigned char	*s;

	i = 0;
	b = c;
	s = (unsigned char *)str;
	while (s[i] && i < n)
	{
		if ((s[i + 1] == '\0') && (b == '\0'))
			return (&s[i + 1]);
		else if (s[i] == b)
			return (&s[i]);
		else
			i++;
	}
	return (0);
}
