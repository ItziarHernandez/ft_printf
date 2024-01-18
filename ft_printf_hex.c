/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ithernan <ithernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:12:51 by ithernan          #+#    #+#             */
/*   Updated: 2024/01/18 11:48:15 by ithernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_hex(unsigned long int n)
{
	int	size;

	if (n <= 0)
		size = 1;
	else
		size = 0;
	while (n)
	{
		size++;
		n /= 16;
	}
	return (size);
}

int	ft_printf_hex(unsigned long int n, int x)
{
	char	*base_16;
	int		size;

	size = size_hex(n);
	base_16 = "0123456789abcdef";
	if (x == 1)
		base_16 = "0123456789ABCDEF";
	if (n <= 15)
		ft_printf_char(base_16[n]);
	else
	{
		ft_printf_hex(n / 16, x);
		ft_printf_hex(n % 16, x);
	}
	return (size);
}
