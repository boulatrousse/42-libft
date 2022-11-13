/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:54:53 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/10 08:05:43 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	*array;

	i = 0;
	array = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	while (i < nmemb)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
