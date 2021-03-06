/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:01:43 by napark            #+#    #+#             */
/*   Updated: 2021/04/11 16:01:59 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** - Appends 'src' to end of 'dst'
**   at most 'dstsize - strlen(dst) - 1' characters.
** - Then NUL-terminates,
**   unless dstsize is 0 or original 'dst' string was longer than dstsize
**   (room for the NUL should be included in dstsize)
**   If return value is >= dstsize, output string has been truncated.
** - Returns the total length of the string they tried to create.
**   : initial length of dst + length of src.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t d;
	size_t s;
	size_t i;
	size_t keep_d;

	keep_d = 0;
	while (keep_d < dstsize && dst[keep_d])
		keep_d++;
	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = 0;
	while (i < s && d + i + 1 < dstsize)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = 0;
	return (keep_d + s);
}
