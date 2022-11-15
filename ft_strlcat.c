/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:03:07 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/15 10:22:32 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	int		i;
	int		j;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (size < size_dest)
		return (size + size_src);
	while (dest[i] && size > 0)
	{
		i++;
		size--;
	}
	j = 0;
	while (src[j] && size > 1)
	{
		dest[i + j] = src[j];
		size--;
		j++;
	}
	if (size > 0)
		dest[i + j] = '\0';
	return (size_dest + size_src);
}
