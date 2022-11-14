/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:54:53 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/14 16:20:58 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*array;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	else
	{
		array = malloc(nmemb * size);
		if (array == NULL)
			return (NULL);
		ft_bzero(array, size);
		return (array);
	}
}

#include <stdio.h>
int main()
{
	char *str = ft_calloc(0, 0);
	char *ss = calloc(0, 0);
	printf("s1 = %s\ns2 = %s\n", str, ss);
}
