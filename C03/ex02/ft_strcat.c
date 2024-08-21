/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:31:17 by yalu              #+#    #+#             */
/*   Updated: 2024/08/15 16:05:46 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 The strcat() and strncat() functions append a
 copy of the null-terminated string s2 to the
 end of the null-terminated string s1, then add
 a terminating `\0'.  The string s1 must have
  sufficient space to hold the result.
*/
//Pseudocode
//FUNCTION ft_strcat
//1. Calculate length of dest
//SET int i = 0
//WHILE dest[i] TO NUL DO
//	INCREMENT i
//END WHILE
//2. append src from end of src
// SET j = 0;
//WHILE src[j] TO NUL DO
//	dest[i] = src[j]
//	INCREMENT i
// 	INCREMENT j
//END WHILE
//3. mannully add NUL terminate to dest
// dest[i] = NUL
// 4. return
// RETURN dest
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char src[] = " ex02";
//	char dest[1000] = "C03";

//	//printf("%s\n", strcat(dest, src));
//	printf("%s\n", ft_strcat(dest, src));
//	return (0);
//}