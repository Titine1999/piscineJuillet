/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:20:32 by dvalenti          #+#    #+#             */
/*   Updated: 2017/07/08 18:23:01 by dvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ligne1(int l, int x)
{
	while (l <= x)
	{
		if (l == 1 || l == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		l++;
	}
	ft_putchar('\n');
}

void	normal(int l, int x)
{
	while (l <= x)
	{
		if (l == 1 || l == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		l++;
	}
	ft_putchar('\n');
}

void	foo(int l, int h, int x, int y)
{
	if (h == 1)
		ligne1(l, x);
	else
	{
		if (h != y)
		{
			l = 1;
			normal(l, x);
		}
		else
		{
			l = 1;
			while (l <= x)
			{
				if (l == 1 || l == x)
					ft_putchar('C');
				else
					ft_putchar('B');
				l++;
			}
			ft_putchar('\n');
		}
	}
}

void	rush02(int x, int y)
{
	int	l;
	int h;

	h = 1;
	l = 1;
	while (h <= y && l <= x)
	{
		foo(l, h, x, y);
		h++;
	}
}
