/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:50:55 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/13 16:44:06 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *cut(char *str, char c)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 0;
    
    while (str[i])
    {
        if (str[i] == c)
            i++;
        else
        {
            count++;
            i++;
            if (str[i + 1] == c)
            {
                str[i + 1] = '\0';
                return (str);
            }
        }
    }
    return (str);
}

char		**ft_split(char const *s, char c)
{
    char    *str;
    str = (char *)s;
    c = 1;
    return (0);
}