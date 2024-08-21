/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:26:12 by yalu              #+#    #+#             */
/*   Updated: 2024/08/18 13:20:27 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 127))
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

//int	main(void)
//{
//	int	c;

//	char	a[] = "";
//	c = ft_str_is_printable(a);
//	printf("%d", c);
//	return (0);
//}
