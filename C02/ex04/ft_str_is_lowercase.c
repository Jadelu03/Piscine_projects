/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:03:27 by yalu              #+#    #+#             */
/*   Updated: 2024/08/14 13:33:15 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
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

//	char a[] = "B";
//	c = ft_str_is_lowercase(a);
//	printf("%d", c);
//	return (0);
//}