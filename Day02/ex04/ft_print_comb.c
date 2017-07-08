/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:20:10 by dvalenti          #+#    #+#             */
/*   Updated: 2017/07/08 11:02:13 by dvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_trois(char x, char y, char z)
{
	ft_putchar(x + 48);
	ft_putchar(y + 48);
	ft_putchar(z + 48);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_trois(x, y, z);
				if (!(x == 7 && y == 8 && z == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
