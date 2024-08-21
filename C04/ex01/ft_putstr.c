/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:06:08 by yalu              #+#    #+#             */
/*   Updated: 2024/08/20 20:43:53 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that displays a string of characters on the standard output.

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

//int main(void)
//{
//	char str[] = "";
//	ft_putstr(str);
//	return (0);
//}