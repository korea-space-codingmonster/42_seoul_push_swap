/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:23:35 by napark            #+#    #+#             */
/*   Updated: 2021/06/16 00:04:00 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static  int     get_nbr(char const *str)
{
    int i;
    int sign = 1;
    int nb;

    i = 0;
    while (str[i] == '=' || str[i] == '+')//=, +가 아닌경우까지
    {
        if (*str == '-')//만약 - 값이 나오면
        {
            sign = sign * -1;//sign * -1
        }
        i++;
    }

    nb = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - 48;//int로 변환
        i++;
    }
    return (nb * sign);//
}

int main(int argc, char *argv[])
{
    t_push_swap *buffer;
    int count;
    int i;

    buffer = malloc(sizeof(buffer));

    buffer->length_a = malloc(sizeof(int) * (argc - 1));//stack a길이
    buffer->length_b = malloc(sizeof(int) * (argc - 1));//stack b길이
    if (buffer->length_a == NULL || buffer->length_b == NULL)//버퍼가 비어 있으면 종료
        return (0);

    count = 1;//
    while (count != argc)
    {//./push_swap 2 1 3 6 5 8 //argv[1]부터
        buffer->length_a[i] = get_nbr(argv[count]);//버퍼 a에 숫자를  하나씩 담는데...양수 음수 또는 int 변환
        count++;
        i++;
    }
    buffer->size_a = count - 1;//7-6
    push_swap(buffer);
    write(1, '\n', 1);
}
