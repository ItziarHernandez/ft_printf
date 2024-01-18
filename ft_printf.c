/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ithernan <ithernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:16:34 by ithernan          #+#    #+#             */
/*   Updated: 2024/01/18 13:00:12 by ithernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_selector(va_list args, char input)
{
	int			count;

	count = 0;
	if (input == 'c')
		count += ft_printf_char(va_arg(args, int));
	else if (input == 's')
		count += ft_printf_string(va_arg(args, char *));
	else if (input == 'p')
		count += ft_printf_ptr(va_arg(args, void *));
	else if (input == 'd' || input == 'i')
		count += ft_printf_nbr(va_arg(args, int));
	else if (input == 'u')
		count += ft_printf_uint(va_arg(args, unsigned int));
	else if (input == 'x')
		count += ft_printf_hex(va_arg(args, unsigned int), 0);
	else if (input == 'X')
		count += ft_printf_hex(va_arg(args, unsigned int), 1);
	else if (input == '%')
		count += write (1, "%", 1);
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		count;	

	i = 0;
	count = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			count += ft_printf_selector(args, input[i]);
		}
		else
			count += write(1, &input[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
// int main (void)
// {
// 	int				num = -9;
// 	unsigned int	i = 5;
// 	char			s = 'c';
// 	char			*str = "Hola mundo";
// 	unsigned int	hx = 16;
// 	ft_printf("string%%: %d %u %c %s %x %X %p\n", num, i, s, str, hx, hx, "");

// printf(" %x ", 10);
// printf(" %x ", 11);
// printf(" %x ", 15);
// printf(" %x ", -9);
// printf(" %x ", -10);
// printf(" %x ", -11);
// printf(" %x ", -14);
// printf(" %x ", -15);
// printf(" %x ", -16);
// printf(" %x ", -99);
// printf(" %x ", -100);
// return (0);
// }