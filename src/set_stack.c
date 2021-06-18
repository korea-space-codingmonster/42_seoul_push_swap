/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:01:21 by napark            #+#    #+#             */
/*   Updated: 2021/06/18 14:39:17 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_error(char *str)
{
    ft_put_str(str, 1);
    exit(1);
}

static int  check_duplicated(int argc, char **check)
{//중복값이 있는지 없는지(입력 값의 개수와, 입력값)
    int i;
    int j;

    i = 0;
    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (!ft_strcmp(check[i], check[j+1]))//같은게 나오면 return 0
                return (0);//중복된게 있으면 false(0)
        }
        i++;
    }
    return (1);//중복된게 없으면 True(1)
}

static int  check_integer_format(int argc, char **check)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (check[i])
    {
        if (check[i][j] == '-' || check[i][j] == '+')
            j++;
        while (check[i][j])
        {
            if (!ft_isdigit(check[i][j++]))
                return (0);
        }
        i++;
    }
    return (1);
}

static int  check_integer_range(argc, check)
{
    
}

void    check_value(int argc, char **check)
{
    if (!check_duplicated(argc, check))
        print_error("duplicated");
    if (!check_integer_format(argc, check))
        print_error("Not integer");
    if (!check_integer_range(argc, check))
        print_error("out_of_range");
}

t_stack     *set_stack(int argc, char **check)
{
    t_stack *a;

    check_value(argc, check);
    
}