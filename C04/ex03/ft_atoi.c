/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:24:23 by yalu              #+#    #+#             */
/*   Updated: 2024/08/21 11:26:31 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Check if there is no integers in string => return 0
//if there is other chars execpt space/+/- before first int => retrun 0
//if

#include <stdio.h>

int	is_integer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (i);
		i++;
	}
	return (-1);
}

int	is_valid(char *str)
{
	int	i;
	int	first_int;

	first_int = is_integer(str);
	i = 0;
	while (i < first_int)
	{
		if (str[i] != ' ' && str[i] != '+' && str[i] != '-')
			return (0);
		i++;
	}
	return (1);
}

int	is_negative(char *str)
{
	int	i;
	int	c;
	int	first_int;

	i = 0;
	c = 0;
	first_int = is_integer(str);
	while (i < first_int)
	{
		if (str[i] == '-')
			c++;
		i++;
	}
	if (c % 2 != 0)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	if (is_valid(str) == 0)
		return (0);
	else
	{
		if (is_negative(str) == 1)
			sign = -1;
		else
			sign = 1;
		result = 0;
		i = is_integer(str);
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		return (sign * result);
	}
}

int	main(void)
{
	char str[] = "  	123";
	printf("%d", ft_atoi(str));
	return (0);
}