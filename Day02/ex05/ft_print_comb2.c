/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2bis.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:15:15 by dvalenti          #+#    #+#             */
/*   Updated: 2017/07/08 11:05:12 by dvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printmchar(char *table)
{
	ft_putchar(table[0]);
	ft_putchar(table[1]);
	ft_putchar(' ');
	ft_putchar(table[2]);
	ft_putchar(table[3]);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	table[4];

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			table[0] = '0' + (a / 10);
			table[1] = '0' + (a % 10);
			table[2] = '0' + (b / 10);
			table[3] = '0' + (b % 10);
			ft_printmchar(table);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
