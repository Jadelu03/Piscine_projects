/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalu <yalu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:51:37 by yalu              #+#    #+#             */
/*   Updated: 2024/08/20 20:47:19 by yalu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = 1;
		if (base[i] == base[i + j])
		{
			return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	absolut(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (nbr);
}

void	recursive(int nbr, char *base)
{
	int	divisor;
	int	abs_nbr;

	divisor = ft_strlen(base);
	if (nbr / divisor != 0)
		recursive(nbr / divisor, base);
	abs_nbr = absolut(nbr % divisor);
	write(1, &base[abs_nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (is_valid(base) == 0)
		return ;
	else
	{
		if (nbr < 0)
			write(1, "-", 1);
		recursive(nbr, base);
	}
}
//int	main(void)
//{
//	char base[] = "0123456789ABCDEF";
//	int nbr;
//	nbr = -348;
//	ft_putnbr_base(nbr, base);
//	return (0);
//}
