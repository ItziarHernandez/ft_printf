/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ithernan <ithernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:23:01 by ithernan          #+#    #+#             */
/*   Updated: 2024/01/18 12:47:51 by ithernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_printf_char(int c);
int	ft_printf_string(char *s);
int	ft_printf_ptr(void *ptr);
int	ft_printf_nbr(int n);
int	ft_printf_hex(unsigned long int n, int x);
int	ft_printf_uint(unsigned int n);

#endif
