/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:58:26 by yalu              #+#    #+#             */
/*   Updated: 2024/08/20 20:43:30 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that counts and returns
//the number of characters in a string.

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//int main(void)
//{
//	char	str[] = "0123456789";
//	printf("%d\n",ft_strlen(str));
//	return (0);
//}
