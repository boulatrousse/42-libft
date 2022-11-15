/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:50:55 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/15 15:15:30 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int count_rows(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
        {
            count++;
            i++;
        }
        else
            i++;
    }
    return (count + 1);
}

/*static int count_lword(char const *s, char c, int i)
{
    int count;

    count = 0;
    while (s[i])
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
          return (count + 2);
        else if (s[i] != c)
        {
            count++;
            i++;   
        }
        else
            i++;
    }
    return (0);
}*/

int lword_count(char const *s, char c)
{
    int i;
    int count;
    
    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else
        {
            count++;
            i++;
        }
    }
    return (count  + 1);    
}

int lword_index(char const *s, char c)
{
    int i;
    int index;
    
    i = 0;
    index = 0;
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else
        {
            index++;
            i++;
        }
    }
    return (index); 
}



/*char    **array(char const *s, char c)
{
    int i;
    int rows;
    int lword;
    char    **array = 0;

    i = 0;
    rows = count_rows(s, c);
    lword = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            lword = count_lword(s, c, i);
            lword = 0;
        }
        else
            i++;
    }
    return (array);
}*/

// char    *ft_char(char const *s, char c, int count)
// {
//     char    **str;
//     char    *str2;
    
//     str = (char **)malloc(sizeof(char *) * (ft_index(s, c) + 1));
//     if (!str)
//         return (NULL);
//     str2 = malloc(sizeof(char) * (count));
//     if (!str2)
//         return (NULL);
//     ft_memcpy(str2, s + ft_index(s, c), count - 1);
//     str2[count] = '\0';
//     printf("str = %s\n", str2);
    
//     return (str2);
// } 



char		**ft_split(char const *s, char c)
{
    int i;
    int rows;
    char    **array;

    i = 0;
    rows = count_rows(s, c);
    array = (char **)malloc(rows * sizeof(char *));
    if (!array)
        return (NULL);
    
    

}

#include <stdio.h>
int main()
{
    char *str = " 123   4569.";
    char charset = ' ';

    //int i = 0;
    //int count = count_rows(str, charset);
    array(str, charset);
    
    
    // char **all_words = ft_split(str, charset);
    // int index = 0;
    // while (all_words[index])
    // {
    //     printf("%s\n",all_words[index]);
    //     index++;
    // }
    return 0;
}


// char **arr = (char**) calloc(num_elements, sizeof(char*));

// for ( i = 0; i < num_elements; i++ )
// {
//     arr[i] = (char*) calloc(num_elements_sub, sizeof(char));
// }
