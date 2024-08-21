/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:38:40 by yalu              #+#    #+#             */
/*   Updated: 2024/08/15 17:03:20 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Reproduce the behavior of the function strncmp (man strncmp)
//Compares up to num characters of the C string str1 to those
//of the C string str2.
//This function starts comparing the first character of each string.
//If they are equal to each other,
//it continues with the following pairs until the characters differ,
//until a terminating null-character is reached,
//or until num characters match in both strings,
//whichever happens first.

//str1: C string to be compared.
//str2: C string to be compared.
//num: Maximum number of characters to compare. size_t
//is an unsigned integral type.

//return value	indicates
//<0 the first character that does not match has
//   a lower value in str1 than in str2
//0	the contents of both strings are equal
//>0 the first character that does not match
//   has a greater value in str1 than in str2

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}

//int main(void)
//{
//    char str1[] = "abbbc";
//    char str2[] = "abbbc";

//    int n;
//    int r;

//    n = 5;
//    r = ft_strncmp(str1, str2, n);
//    printf("%d\n", r);
//}
