/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:55:30 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/30 11:55:32 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_hexa(unsigned int num, char hex, int *count)
{
	char	*c;

	if (hex == 'x')
		c = "0123456789abcdef";
	else
		c = "0123456789ABCDEF";
	if (num < 16)
	{
		*count += write (1, &c[num], 1);
	}
	else
	{
		ft_print_hexa(num / 16, hex, count);
		ft_print_hexa(num % 16, hex, count);
	}
}
