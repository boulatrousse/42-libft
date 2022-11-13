/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:03:07 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/10 09:10:29 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t srcl;
    size_t dstl;

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

#include <stdio.h>
#include <string.h>


int    main(void)
{
    char s[10] = "1234567890";
    char ss[10] = "abcde";
    char s1[10] = "1234567890";
    char ss2[10] = "abcde";
    ft_strlcat(s, ss, 10);
    printf("fx ; %s\n", s);
    strlcat(s1, ss2, 10);
    printf("bin ; %s\n", s1);
    return (0);
}