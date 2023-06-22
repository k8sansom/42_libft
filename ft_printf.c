/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:03:56 by ksansom           #+#    #+#             */
/*   Updated: 2023/06/12 13:58:10 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search_args(va_list arg, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_char(va_arg(arg, int));
	else if (c == 's')
		len += ft_print_str(va_arg(arg, const char *));
	else if (c == 'p')
		len += ft_print_pointer(va_arg(arg, const void *));
	else if (c == 'd' || c == 'i')
		len += ft_print_int(va_arg(arg, int));
	else if (c == 'u')
		len += ft_print_unsigned_int(va_arg(arg, unsigned int));
	else if (c == 'x')
		len += ft_print_hex_low(va_arg(arg, unsigned int));
	else if (c == 'X')
		len += ft_print_hex_up(va_arg(arg, unsigned int));
	else if (c == '%')
		len += ft_print_char('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_search_args(arg, format[i + 1]);
			i++;
		}
		else
			len += ft_print_char(format[i]);
		i++;
	}
	return (len);
}
