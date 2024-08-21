/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:18:36 by yalu              #+#    #+#             */
/*   Updated: 2024/08/15 17:05:05 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Reproduce the behavior of the function strcmp

//The strcmp function in C compares two strings lexicographically and
//returns an integer indicating whether the first string is less than, equal to,
//or greater than the second string.

//If the first string is smaller lexicographically,
//	strcmp returns a negative value.
//If the first string is larger, it returns a positive value.
//If the strings are identical, it returns 0.

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

//int	main(void)
//{
//	int		j;
//	char	str1[] = "aas";
//	char	str2[] = "aab";

//	j = ft_strcmp(str1, str2);
//	printf("%d\n", j);
//}