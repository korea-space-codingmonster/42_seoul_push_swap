/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:22:24 by napark            #+#    #+#             */
/*   Updated: 2021/06/16 01:47:55 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

static int     find_smaller(t_push_swap *buffer)
{
    int i;
    int smaller_n;

    i = 0;
    smaller_n = 2147483647;
    while (i < buffer->size_a)
    {
        if (buffer->length_a[i] < smaller_n)
            smaller_n = buffer->length_a[i];
        i++;
    }
    return (smaller_n);
}

static int     check_buffer(t_push_swap *buffer)
{
    int i;
    int j;
    int check;

    i = 1;//a에는 2개 이상의 수가 있어야함으로 1
    j = 0;
    check = 1;//list에 오름차순으로 넣은건 아닌지 아닌지 확인
    while (i < buffer->length_a && check == 1)
    {
        if (buffer->length_a[j] < buffer->length_a[j+1])//
        {
            i++;
            j++;
        }//오름차순으로 수를 넣을 때는 프로그램
        else{
            check = 0;
        }
    }
    return (check);
}

void    push_swap(t_push_swap   *buffer)
{
    //list_a에 음수 또는 양수가 2개 이상 무조건 들어 있어야함
    //list_b는 비어 있어야 함.
    int check_list;
    int smaller;

    check_list = check_buffer(buffer);
    if(check_list == 0)//정렬되지 않은 수를 넣었을 경우 프로그램 시작
    {
        while (buffer->size_a != 0)
        {
            smaller = find_smaller(buffer);//지속적으로 제일 작은 수를 찾는다.
            while (buffer->length_a[0] != smaller)//제일 작은 smaller가 맨 앞으로 올떄까지 rotation
            {
                ra(buffer);
            }
        }
    }

    
}