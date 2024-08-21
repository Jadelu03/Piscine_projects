/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:33:55 by yalu              #+#    #+#             */
/*   Updated: 2024/08/15 17:04:40 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parameters
//<dst>: The string to which the string <src> is to be appended.
//<src>: A NUL-terminated string to append to the end of <dst>.
//<size>: The total length of the concatenated string to create, including NUL.
//Returns
//The	strlcat(void) function returns the total length of the string that
//would have been created if there was unlimited space. This might or
//might not be equal to the length of the created string,
//depending on whether there was enough space.
//This means that you can call strlcat() once
//to find out how much space is required,
//then allocate it if you do not have enough,
//and finally call	strlcat(void) a second time
//to create the required string.

//Pseudocode
//Funtion ft_strlcat(dest, src, size)
//1. calculate the length of dest and src by using ft_strlen function
// SET dest_len = length of dest
// SET src_len = lenght of src;
//2. check IF enough space in dest
//IF size <= dest_len
//	RETURN size + src_len
//3. calculate available space for copying
//SET ava_space TO size - dest_len_1
//4. Copy src from the end of dest
//SET i TO 0
// WHILE i FROM 0 TO ava_space AND src[i] is NOT NULL DO
//		dest[dest_len + i] = src[i]
//      INCREMENT i
// END WHILE
//5. add NULL terminate to dest
//dest[dest_len + i] = NULL
//6. Return new length
//RETURN dest_len + src_len

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	ava_space;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	ava_space = size - dest_len;
	i = 0;
	while (i < ava_space && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

//int	main(void)
//{
//	unsigned int n;
//	//unsigned int r;
//	unsigned int r1;
//	char src[] = "Test";
//	char dest[1000] = "test22";

//	n = 3;
//	//r = strlcat(dest, src, n);
//	r1 = ft_strlcat(dest, src, n);
//	//printf("%d\n", r);
//	printf("%d\n", r1);
//	printf("%s\n", dest);
//	return (0);
//}