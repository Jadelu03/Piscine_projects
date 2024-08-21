/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:45:21 by yalu              #+#    #+#             */
/*   Updated: 2024/08/15 16:26:12 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The C library strstr() function returns a pointer to the first index
//of a specified substring in another string.
//The main goal of strstr() is to search for a substring
//within a larger string and it helps to find the first occurrence
//of a specified substring.

//The function returns a pointer to
//the first characters of str_2 in str_1
//or null pointer if str_2 is not found in str_1.

//If str_2 is found as an empty string, str_1 is returned.

// Pseudocode:
// 1. Calculate lengths of str and to_find
// SET str_len to the lengths of str
// SET to_find_len to the lengths of to_find
// 2. empty to_find
// IF to_find_len is 0 then
//		RETURN str
// 3. Find the starting point in str
// WHILE i FROM 0 TO (str_len - to_find_len) DO
// 		SET j TO 0;

//		4.Compare char of to_find with current substring of str
//		WHILE j < to_find_len AND str[i+j] == to_find[j] DO
//			INCREMENT j
//      5. If all chars me=atch, return the starting string poistion
// 		IF j == to_find_str THEN
//			Return pointer to str[i]
//		END IF
// END WHILE
//  6. if no match found, return NULL
//	RETURN NULL

#include <stdio.h>
#include <string.h>

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

char	*ft_strstr(char *str, char *to_find)
{
	int	str_len;
	int	to_find_len;
	int	i;
	int	j;

	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	i = 0;
	if (to_find_len == 0)
		return (str);
	while (i <= str_len - to_find_len)
	{
		j = 0;
		while (j < to_find_len && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == to_find_len)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char str[] = "I love cats and dogs";
//	char to_find[] = "dogs";

//	printf("%s\n", strstr(str, to_find));
//	printf("%s\n", ft_strstr(str, to_find));
//	return (0);
//}