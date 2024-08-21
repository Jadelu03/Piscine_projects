/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:46:44 by yalu              #+#    #+#             */
/*   Updated: 2024/08/18 13:19:02 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char* strcpy(char* destination, const char* source);
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char a[] = "apple";
//	char dest[] = "hello";
//	//	printf("%s\n", dest);
//	ft_strcpy(dest, a); // passing to function
//	printf("%s\n", dest);
//	return (0);
//}