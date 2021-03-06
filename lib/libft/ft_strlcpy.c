/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:02:21 by napark            #+#    #+#             */
/*   Updated: 2021/04/11 16:02:34 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** - Copies up to 'dstsize - 1' characters from string 'src' to 'dst'
** - Takes full size of the destination buffer
**   Guarantees NUL-termination if dstsize is not 0.
**   (room for NUL should be included in dstsize)
**   If return value is >= dstsize, output string has been truncated.
** - Returns total length of string they tried to create.
**   : length of src
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t i;

	if (dst == NULL && src == NULL)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	while (i < srcsize && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = 0;
	return (srcsize);
}

/*
** line 30-31 : Added protection
*/
