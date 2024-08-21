/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:01:44 by yalu              #+#    #+#             */
/*   Updated: 2024/08/18 13:09:07 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

//int	main(void)
//{
//	int		c;
//	char	a[] = "12 2345";
//	c = ft_str_is_numeric(a);
//	printf("%d\n", c);
//	return (0);
//}
