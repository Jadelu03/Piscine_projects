/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:12:33 by yalu              #+#    #+#             */
/*   Updated: 2024/08/20 20:46:28 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	absolut(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (nbr);
}

void	recursive(int nb)
{
	char	abs_nb;

	if (nb / 10 != 0)
		recursive(nb / 10);
	abs_nb = absolut(nb % 10) + '0';
	write(1, &abs_nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	recursive(nb);
}

//int	main(void)
//{
//	ft_putnbr(0);
//	write(1, "\n", 1);
//	ft_putnbr(-42);
//	write(1, "\n", 1);
//	ft_putnbr(3446);
//	write(1, "\n", 1);
//	ft_putnbr(2147483647);
//	write(1, "\n", 1);
//	ft_putnbr(-2147483648);
//	write(1, "\n", 1);
//	return (0);
//}
