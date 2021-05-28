/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:23:35 by napark            #+#    #+#             */
/*   Updated: 2021/05/28 01:36:26 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static  int     get_nbr(char const *str)
{
    int i;
    int sign = 1;
    int nb;

    i = 0;
    while (str[i] == '=' || str[i] == '+')
    {
        if (*str == '-')
        {
            sign = sign * -1; 
        }
        i++;
    }

    nb = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - 48;
        i++;
    }
    return (nb * sign);
}

int main(int argc, char *argv[])
{
    t_push_swap *buffer;
    int count;
    int i;

    buffer = malloc(sizeof(buffer));

    buffer->length_a = malloc(sizeof(int) * (argc - 1));//stack a길이
    buffer->length_b = malloc(sizeof(int) * (argc - 1));//stack b길이
    if (buffer->length_a == NULL || buffer->length_b == NULL)
        return (0);
    
    count = 1;
    while (count != argc)
    {
        buffer->length_a[i] = get_nbr(argv[count]);
        count++;
        i++;
    }
    buffer->size_a = count - 1;
    //push_swap(buffer);
    write(1, '\n', 1);
}