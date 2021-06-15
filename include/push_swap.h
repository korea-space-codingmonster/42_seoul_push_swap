/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:14:00 by napark            #+#    #+#             */
/*   Updated: 2021/06/16 01:50:33 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


typedef struct  s_push_swap
{
    int     *length_a;
    int     *length_b;
    int     size_a;
    int     size_b;
}               t_push_swap;

void    push_swap(t_push_swap   *buffer);
int     rotate_a(t_push_swap *buffer);

#endif