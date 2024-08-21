/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 21:27:34 by yalu              #+#    #+#             */
/*   Updated: 2024/08/05 15:30:49 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;   // declare c
	c = *a;  // assign c to *a
	*a = *b; // assign *b to *a, overwrite the valule of a
	*b = c;  // as
}

/*
int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 4;
	d = 2;
	a = &c;
	b = &d;
	ft_swap(a, b);
	printf("c: %d", c);
	printf("d: %d", d);
}
*/
