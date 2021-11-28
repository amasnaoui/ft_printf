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
#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list	args;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			ft_putchar_fd('%',1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			ft_putchar_fd(va_arg(args,int),1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			ft_putstr_fd(va_arg(args,char *),1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			ft_putnbr_fd(va_arg(args,int),1);
			i++;
		}
		else
			ft_putchar_fd(format[i],1);
		i++;
	}
	va_end(args);
	return 0;
}
int main()
{
	char c = 'p';
	char s[10] = "strings";
	int h = 56468;
	ft_printf(" this is char %c,\n and this is string %s,\n and this is percent %%,\n and this is a number %d\n\n\n",c,s,h);
	printf(" this is char %c,\n and this is string %s,\n and this is percent %%,\n and this is a number %d\n\n\n",c,s,h);
	return 0;
}