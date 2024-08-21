/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:02:35 by yalu              #+#    #+#             */
/*   Updated: 2024/08/18 13:09:01 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

/*
int	main(void)
{
	int		c;
	char	a[];

	a[] = "abcdefghijkl";
	c = ft_str_is_alpha(a);
	printf("%d\n", c);
	return (0);
}
*/
