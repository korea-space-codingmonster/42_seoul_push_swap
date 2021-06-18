/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:32:08 by napark            #+#    #+#             */
/*   Updated: 2021/06/17 15:22:06 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib/libft/libft.h"

typedef struct  s_stack
{
    struct t_stack *next;
    struct t_stack *prev;
    int             content; 
}               t_stack;

typedef struct  s_push_swap
{
    int *a;//a stack
    int *b;//b stack
}               t_push_swap;

#endif