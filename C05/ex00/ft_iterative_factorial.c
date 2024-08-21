/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:02:35 by yalu              #+#    #+#             */
/*   Updated: 2024/08/21 11:20:54 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
0! = 1
-1! FALSE
5! = 5 * 4 * 3 * 2 * 1
1' result = 5 * 1 = 5
nb = 4
2' result = 5 * 4
nb = 3
FUNCTION 
	declare result
	IF nb is LESS then 0 
		return 0
	END IF
	ELSE IF nb is EQUAL TO 0
		return 1
	END ELSE IF
	ELSE
		WHILE nb is GREATER then 0 DO
			result = nb * result
			DECREMENT nb
		END WHILE
		RETURN result
	END ELSE  
END FUNCTION
*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		result = 1;
		while (nb > 0)
		{
			result = nb * result;
			nb--;
		}
		return (result);
	}
}

//#include <stdio.h>
//int	main(void)
//{
//	int nb;

//	nb = -3;
//	printf("%d", ft_iterative_factorial(nb));
//	return (0);
//}