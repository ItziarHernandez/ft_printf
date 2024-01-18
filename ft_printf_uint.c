/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ithernan <ithernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:24:56 by ithernan          #+#    #+#             */
/*   Updated: 2024/01/17 10:29:56 by ithernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uint(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_printf_uint((n / 10));
	count += ft_printf_char((n % 10) + '0');
	return (count);
}
