/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:50:55 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/10 14:03:14 by lboulatr         ###   ########.fr       */
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


// char    **ft_split(char const *s, char c)
// {
    
    
// }

#include <stdio.h>
int main()
{
    char *str = "       Olympus  999   ";
    // char charset = ' ';
    // char **all_words = ft_split(str, charset);
    // int index = 0;
    // while (all_words[index])
    // {
    //     printf("%s\n",all_words[index]);
    //     index++;
    // }
    cut(str, ' ');
    printf("%s\n", str);
    return 0;
    
}