/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:23:35 by napark            #+#    #+#             */
/*   Updated: 2021/06/17 17:07:08 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     main(int argc, char **argv)
{
    t_push_swap     data;
    char    **check;//최종 stack으로 반환받기 위함

    check = check_arg(&argc, argv);//문자열 arg, 개별값 arg값 parsing
    data.a = set_stack(argc, check);
    
}