/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:32:08 by napark            #+#    #+#             */
/*   Updated: 2021/06/17 13:01:56 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib/libft/libft.h"

typedef struct  s_stack
{
    typedef t_stack *next;
    typedef t_stack *prev;
    int             content; 
}               t_stack;

typedef struct  s_push_swap
{
    int *a;
    int *b;
}               t_push_swap;

#endif