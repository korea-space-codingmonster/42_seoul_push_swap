/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:43:37 by napark            #+#    #+#             */
/*   Updated: 2021/06/16 03:02:25 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void    put_char(char c)
{
    write(1, &c, 1);
}

void    put_str(const char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
    {
        put_char(c[i]);
        i++;
    }
}

int     rotate_a(t_push_swap *buffer)
{//ra(rotate a) : a의 모든 요소를 1씩 위로 이동, 첫번째 요소가 마지막 요소가 된다.
    int temp;
    int i;

    i = 0;
    temp = buffer->length_a[0];
    go_left(buffer->length_a, buffer->size_a);
    while (i < buffer->size_a)
    {
        i ++;
    }
    buffer->length_a[i-1] = temp;
    put_str("ra ");
    return (0);
}