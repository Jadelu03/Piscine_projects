/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:42:08 by yalu              #+#    #+#             */
/*   Updated: 2024/08/21 11:17:35 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 0, 1, 1, 2, 3, 5
// index 0 -> 0
// index 1 -> 1
// index 2 -> 1
// index 3 -> 2 = index 2 + index 1

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

//#include <stdio.h>

//int main(void)
//{
//	printf("%d\n", ft_fibonacci(9));
//	return (0);
//}