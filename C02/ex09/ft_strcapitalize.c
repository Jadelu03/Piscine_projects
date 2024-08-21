/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:41:31 by yalu              #+#    #+#             */
/*   Updated: 2024/08/14 13:49:03 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a function that capitalizes the first letter of each word 
and transforms all
other letters to lowercase.

A word is a string of alphanumeric characters.

-Convert all alpha to lowercase
-IF (index - 1) neither loweralpha, nor upperalpha, nor digits, 
-then convert index to  char = char -32  
*/

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ((str[i - 1] < 'a' || str[i - 1] > 'z')
					&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
					&& (str[i - 1] < '0' || str[i - 1] > '9')))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

//int	main(void)
//{
//	int i;
//	char str[] = "i wish u the best in the rest of life";
//	i = 0;

//	ft_strcapitalize(str);
//	while (ft_strcapitalize(str)[i] != '\0')
//	{
//		printf("%c", ft_strcapitalize(str)[i]);
//		i++;
//	}
//	return (0);
//}