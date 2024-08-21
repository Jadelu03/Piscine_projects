/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:35:57 by yalu              #+#    #+#             */
/*   Updated: 2024/08/21 11:20:12 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

5^3 = 5 * 5 * 5
1' result = 1 result = 5 power = 2
2' result = 5*5 power = 1
3' result = 5*5*5 power = 0
return result


*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = 1;
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}

//#include <stdio.h>
//int	main(void)
//{
//	printf("%d", ft_iterative_power(-2, -1));
//	return (0);
//}