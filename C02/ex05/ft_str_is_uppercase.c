/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:22:57 by yalu              #+#    #+#             */
/*   Updated: 2024/08/18 13:10:33 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

//int	main(void)
//{
//	int c;

//  char a[] = "ABCGeRY";
//	c = ft_str_is_uppercase(a);
//	printf("%d", c);
//	return (0);
//}