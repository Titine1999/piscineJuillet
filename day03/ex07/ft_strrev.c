/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:44:14 by dvalenti          #+#    #+#             */
/*   Updated: 2017/07/07 15:31:29 by dvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

char	 *ft_strrev(char *str)
{
	int l;
	int i;

	i = 0;
	l = -1;
	while (*str++)
		l++;
	while (l >= 0)
	{
		str[i]= str[l];
		l--;
		i++;
	}
	return (str);
}

int		main(void)
{
	ft_strrev("coucou");
	return(0);
}
