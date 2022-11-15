/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:18:32 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/15 10:29:38 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		x;

	i = 0;
	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if (!haystack)
		return (0);
	while (haystack[i] && i <= len)
	{
		if (haystack[i] == needle[0])
		{
			x = 0;
			while ((haystack[i + x] == needle[x]
					&& needle[x] != '\0') && (i + x < len))
				x++;
			if (needle[x] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
