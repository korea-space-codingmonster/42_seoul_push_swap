/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:03:25 by napark            #+#    #+#             */
/*   Updated: 2021/06/18 17:27:10 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
    t_stack *a;
	t_stack *b;
	char	**arg;

	if (argc <= 1)
		return (0);
	arg = init_arg(&argc, argv);
	//a = set_stack(argc, arg);
	//b = init_stack();
	//push_swap(a, b, argc);
	return (0);
}