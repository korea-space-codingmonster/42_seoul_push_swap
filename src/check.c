/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:23:33 by napark            #+#    #+#             */
/*   Updated: 2021/06/17 17:01:03 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  count_double_array(char **str)
{
    int i;
    
    if (!str)
        return (0);
    i = 0;
    while (str[i])
        i++;
    return (i);
}

static char **join_double_arr(char **des, char **src)
{
    char **result;
    int des_cnt;
    int src_cnt;
    int i;
    int j;

    des_cnt = count_double_array(des);
    src_cnt = count_double_array(src);
    
    result = (char **)malloc(sizeof(char *) * (des_cnt + src_cnt) + 1);
    if (!(result))
        return(NULL);
    
    i = -1;
    while (++i < des_cnt)
        result[i] = des[i];
    j = 0;
    while (j < src_cnt)
        result[i++] = src[j++];
    free(des);
    free(src);
    result[i] = NULL;
    return (result);
}

char    **init_arg(int *argc, char **argv)
{
    char **temp;
    char **result;
    int i;

    i = 1;
    result = NULL;
    while (i < *argc)
    {
        temp = ft_split(argv[i++], ' ');//split
        if (!result)//case_1 : ./push_swap 1 2 3 4 5
            result = temp;
        else//case_2 : ./push_swap "1 2 3 4 5"
            result = join_double_arr(result, temp);//stack에 쌓기..
    }
    *argc = count_double_array(result);
    return (result);
}