/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:03:07 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/15 09:53:44 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srcl;
	size_t	dstl;

	i = 0;
	srcl = ft_strlen(src);
	if (size == 0)
		return (srcl);
	dstl = 0;
	while (dst[dstl])
		dstl++;
	while (src[i] != '\0' && dstl + i < (size - 1))
	{
		dst[i + dstl] = src[i];
		i++;
	}
	if (i < size)
		dst[i + dstl] = '\0';
	if (dstl > size)
		return (srcl + size);
	return (dstl + srcl);
}
