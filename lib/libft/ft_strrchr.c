/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:05:33 by napark            #+#    #+#             */
/*   Updated: 2021/04/11 16:06:03 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** - Locates 'last' occurrence of 'c'(converted to a char) pointed to by 's'.
** - The terminating NULL is considered to be part of string.
**   (therefore if 'c' is '', the functions locate terminating '')
** - Returns a pointer to the located character,
**   or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

/*
** line 25 : declare int type instead of size_t (so that i can be -1)
** test 5 "-s" "+Null"
** test 8 "-bonjour" "+Null"
** line 28 : change while conditino from 'i > 0' to 'i >= 0',
**           to search until i = 0
** line 31 : change return value from 's' to 's + i'
*/
