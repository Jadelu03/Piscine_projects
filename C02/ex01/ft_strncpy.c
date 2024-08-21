/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:04:40 by yalu              #+#    #+#             */
/*   Updated: 2024/08/18 13:19:07 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//
//int	main(void)
//{
//	char			dest[100];
//	char			*src;
//	unsigned int	n;

//	char	a[]="hello";

//	src = a;
//	n = 2;
//	ft_strncpy(dest, src, n);
//	printf("%s\n", dest);
//	return (0);
//}
