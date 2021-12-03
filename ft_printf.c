/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:54:39 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/24 18:54:42 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print(va_list args, const char *format, int i, int *count)
{
	if (format[i + 1] == '%')
		ft_putchar_fd('%', 1, count);
	else if (format[i + 1] == 'c')
		ft_putchar_fd(va_arg(args, int), 1, count);
	else if (format[i + 1] == 's')
		ft_putstr_fd(va_arg(args, char *), 1, count);
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, count);
	else if (format[i + 1] == 'x')
		ft_print_hexa(va_arg(args, unsigned int), 'x', count);
	else if (format[i + 1] == 'X')
		ft_print_hexa(va_arg(args, unsigned int), 'X', count);
	else if (format[i + 1] == 'p')
		ft_print_address(va_arg(args, unsigned long), count);
	else if (format[i + 1] == 'u')
		ft_putunsigned(va_arg(args, unsigned int), count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_print(args, format, i, &count);
			i++;
		}
		else
			ft_putchar_fd(format[i], 1, &count);
		i++;
	}
	va_end(args);
	return (count);
}
