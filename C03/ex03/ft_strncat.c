/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:31:08 by yalu              #+#    #+#             */
/*   Updated: 2024/08/15 16:04:58 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Appends the first num characters of source to destination,
//plus a terminating null-character.

//If the length of the C string in source is less than num,
//only the content up to the terminating null-character is copied.

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
//	unsigned int nb;
//	char src[] = "ss";
//	char dest[1000] = "apple";

//	nb = 5;
//	//printf("%s\n", strncat(dest, src, nb));
//	printf("%s\n", ft_strncat(dest, src, nb));
//}