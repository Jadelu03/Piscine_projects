/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:30:48 by yalu              #+#    #+#             */
/*   Updated: 2024/08/21 11:17:19 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// input 4 ouput: 5
// 4 if is a prime number false
// 4 + 1 => 5 if is prime True

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
//#include <stdio.h>

//int	main(void)
//{
//	printf("%d\n", ft_find_next_prime(6));
//	return (0);
//}