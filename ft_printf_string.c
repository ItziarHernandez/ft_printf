/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ithernan <ithernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:15:32 by ithernan          #+#    #+#             */
/*   Updated: 2024/01/18 11:13:33 by ithernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_printf_string(char *str)
{
	int	size;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (str)
	{
		size = ft_strlen(str);
		write(1, str, size);
		return (size);
	}
	return (0);
}
