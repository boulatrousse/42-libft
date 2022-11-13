/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:18:32 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/13 17:54:03 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		x;
	char	*h;
	char	*n;

	i = 0;
	x = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		if (h[i] == n[0])
		{
			x = 0;
			while ((h[i + x] == n[x] && n[x] != '\0') && i + x < len)
				x++;
			if (n[x] == '\0')
				return (&h[i]);
		}
		i++;
	}
	return (0);
}
