/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:04:51 by napark            #+#    #+#             */
/*   Updated: 2021/04/11 16:05:11 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** - Locates 1st occurrence of 'needle' in 'haystack'
**   searching not more than len.
** - Characters that appear after a `\0' character are not searched.
** - Returns
**   1) haystack, if needle is an empty string.
**   2) a pointer to first character of first occurrence of needle.
**   2) NULL, if needle occurs nowhere in haystack.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (needle[0] == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

/*
** line 35 : add while condition, 'i + j' not to exceed 'len'
*/
