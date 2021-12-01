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

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list	args;
	int	count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			ft_putchar_fd('%',1,&count);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			ft_putchar_fd(va_arg(args,int),1,&count);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			ft_putstr_fd(va_arg(args,char *),1,&count);
			i++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			ft_putnbr_fd(va_arg(args,int),1,&count);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'x')
		{
			ft_print_hexa(va_arg(args,int),'x',&count);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'X')
		{
			ft_print_hexa(va_arg(args,int),'X',&count);
			i++;
		}
		else
			ft_putchar_fd(format[i],1,&count);
		i++;
	}
	va_end(args);
	return (count);
}
// int main()
// {
// 	char c = 'p';
// 	char s[10] = "strings";
// 	int h = 56468;
// 	//char *p = &c;
// 	ft_printf(" this is char %c,\n and this is string %s,\n and this is percent %%,\n and this is a number %d\n and this is a lower hexa %x,\n and this is a upper hexa %X\n\n\n",c,s,h,255,255);
// 	printf(" this is char %c,\n and this is string %s,\n and this is percent %%,\n and this is a number %d\n and this is a lower hexa %x,\n and this is a upper hexa %X\n",c,s,h,255,255);
// 	return 0;
// }