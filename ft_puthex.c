/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:12:01 by ayakoubi          #+#    #+#             */
/*   Updated: 2022/10/31 15:30:01 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	counter(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_puthex(unsigned long int nbr, char *base)
{
	int	len;
	int	a;

	a = 0;
	len = 0;

	if (nbr / 16)
		len = ft_puthex(nbr / 16, base);
	ft_putchar(base[nbr % 16]);
	len += counter(len);
	return (len);
}
