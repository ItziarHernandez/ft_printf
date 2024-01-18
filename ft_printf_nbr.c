/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ithernan <ithernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:02:40 by ithernan          #+#    #+#             */
/*   Updated: 2024/01/18 11:13:13 by ithernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_nbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = n * (-1);
	}
	if (n < 10)
		count += ft_printf_char(n + '0');
	else
	{
		count += ft_printf_nbr(n / 10);
		count += ft_printf_nbr(n % 10);
	}
	return (count);
}
