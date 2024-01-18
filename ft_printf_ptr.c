/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ithernan <ithernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:48:44 by ithernan          #+#    #+#             */
/*   Updated: 2024/01/18 12:49:10 by ithernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr)
{
	unsigned long	n;

	n = (unsigned long)ptr;
	ft_printf_string("0x");
	return (ft_printf_hex(n, 'x') + 2);
}
